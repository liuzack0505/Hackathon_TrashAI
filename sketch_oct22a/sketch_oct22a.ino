#include <Servo.h>

Servo servo_1;
Servo servo_2;  // 定義第二個伺服馬達對象

int goal_position;   //目標位置

// 假設伺服馬達旋轉360度需要2000毫秒 (這需要您自行測試得出)
double rotationTime = 4600;

int last_position = 1;

void setup() {
  servo_1.attach(9);
  servo_2.attach(3); 
  Serial.begin(9600);

  servo_2.write(90);  //初始化馬達2
  delay(1000);
  servo_2.write(0);
}

void loop() {
  digitalWrite(2, HIGH);  // 將腳位2設置為5V（高電平）
  if (Serial.available() > 0 &&  goal_position != '\n') { 
    
     goal_position = Serial.parseInt(); 
    
    //Serial.println(inputVal);

    if (goal_position == 0 || goal_position == '\r') {
      // Serial.println("P");
      return;
    }

    Serial.println("last_position");
    Serial.println(last_position);
    //Serial.println(current_state);

    switch (goal_position) {
      
      case 2:  //轉到位置2
        Serial.println("enter 2");
        if (last_position == 1)
        {
          rotateServo(85); //正轉90度
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 3)
        {
          rotateServo_2(90); //負轉90度
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 4)
        {
          rotateServo(90);
          rotateServo(83);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else{
          rotateServo(0);  // 不轉動
          delay(2500);
          rotateSmallServo();
        }
        break;
      
      case 3: //轉到位置3
        Serial.println("enter 3");
        if (last_position == 1)
        {
          rotateServo(80); //正轉180度
          rotateServo(80);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 2)
        {
          rotateServo(85); //正轉90度
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 4)
        {
          rotateServo_2(90);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else{
          rotateServo(0);  // 不轉動
          delay(2500);
          rotateSmallServo();
        }
        break;
      case 4:
        Serial.println("enter 4");
        Serial.println("last_position");
        Serial.println(last_position);
        if (last_position == 1)
        {
          rotateServo_2(90);
          Serial.println("逆轉90");
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 2)
        {
          rotateServo(90);
          rotateServo(83);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 3)
        {
          rotateServo(85);
          Serial.println("正轉90");
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else{
          rotateServo(0);  // 不轉動
          delay(2500);
          rotateSmallServo();
        }
        break;
      case 1:
        Serial.println("enter 1");
        if (last_position == 2)
        {
          rotateServo_2(90);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 3)
        {
          rotateServo(90);
          rotateServo(83);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else if (last_position == 4)
        {
          rotateServo(85);
          delay(2500);
          rotateSmallServo();
          last_position = goal_position; //更新上一個位置
          Serial.println("last_position");
          Serial.println(last_position);
        }
        else{
          rotateServo(0);  // 不轉動
          delay(2500);
          rotateSmallServo();
        }
        break;
      default:
        Serial.println("N");
        break;
    }
  }
}

void rotateServo(int degrees) {
  double delayTime = (rotationTime /360.0 * (double)degrees); // 注意將 rotationTime 轉換為 long

  if(degrees > 0) {
    servo_1.write(100);  
    delay((unsigned long)delayTime);    
    servo_1.write(90);   
  }
}

void rotateServo_2(int degrees) {
  double delayTime = (rotationTime /360.0 * (double)degrees); // 注意將 rotationTime 轉換為 long

  if(degrees > 0) {
    servo_1.write(83);  
    delay((unsigned long)delayTime);    
    servo_1.write(90);   
  }
}

void rotateSmallServo() {
  servo_2.write(60);
  delay(5000);
  servo_2.write(0);

}
