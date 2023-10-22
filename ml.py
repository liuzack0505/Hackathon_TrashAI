import cv2
import serial
import time
import pathlib
from fastai.vision.all import *
from PIL import Image as PilImage
from fastai.vision.core import PILImage

ser = serial.Serial('COM3', baudrate=115200) 
ser2 = serial.Serial('COM4', 9600)
time.sleep(2)


temp = pathlib.PosixPath
pathlib.PosixPath = pathlib.WindowsPath

# 定義模型的路徑
model_path = r"./mc_garbage_classification.pkl"

# 載入模型
learn = load_learner(model_path)


# 初始化OpenCV窗口
#cv2.namedWindow("Webcam", cv2.WINDOW_NORMAL)

cap = cv2.VideoCapture(1, cv2.CAP_DSHOW)  # 使用第一個攝像頭。根據需要調整這個數字。

if not cap.isOpened():
    print("Error: Couldn't open the webcam.")
    exit()

print("Press 's' to take a photo or 'q' to exit.")

while True:
    ret, frame = cap.read()  # 讀取一幀
    if not ret:
        print("Error: Couldn't read a frame from webcam.")
        break

    # 顯示當前畫面
    cv2.imshow('Webcam', frame)

    key = cv2.waitKey(1)
    if key == ord('s'):
        # 調整圖片大小為640x640
        resized_frame = cv2.resize(frame, (640, 640))

        # 使用Pillow設定DPI和位元深度
        image_pillow = PilImage.fromarray(cv2.cvtColor(resized_frame, cv2.COLOR_BGR2RGB))
        image_pil = PILImage.create(image_pillow)

        save_path = r"./webcam_shot.jpg"
        image_pil.save(save_path, dpi=(96, 96))

        # 再次讀取調整後的照片進行預測
        img_pil = PILImage.create(save_path)
        pred_class, pred_idx, outputs = learn.predict(img_pil)
        print(f"Predicted class: {pred_class}")
        if pred_class == "plastic":
            ser.write("1".encode())
            ser2.write("1".encode())
        elif pred_class == "paper":
            ser.write("2".encode())
            ser2.write("2".encode())
        elif pred_class == "metal":
            ser.write("3".encode())
            ser2.write("3".encode())
        elif pred_class == "cardboard":
            ser.write("4".encode())
            ser2.write("4".encode())
        time.sleep(5)
        ser.write("5".encode())
    elif key == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
ser.close()