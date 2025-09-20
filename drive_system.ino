#include <Servo.h>

Servo myservo1;
Servo myservo2;

int brake_max = 180;
int brake_min = 100;
int turn_time = 200;


void setup() {
  //기본 설정
  //우측 브레이크 = 6번핀
  //좌측 브레이크 = 7번핀
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  myservo1.attach(6);
  myservo2.attach(7);

  //브레이크 작동으로 시작
  brake(2000);

}

void brake(int t) {
  //양쪽 브레이크 전개
  myservo1.write(brake_max);
  myservo2.write(brake_max);
  delay(t);
  myservo1.write(brake_min);
  myservo2.write(brake_min);
}

void straight(int d) {
  //매개변수 d만큼 전진
  myservo1.write(brake_min);
  myservo2.write(brake_min);
  delay(d);
  myservo1.write(brake_max);
  myservo2.write(brake_max);
}

void right() {
  myservo1.write(brake_max);
  delay(turn_time);
  myservo1.write(brake_min);
}

void left() {
  myservo2.write(brake_max);
  delay(turn_time);
  myservo2.write(brake_min);
}


