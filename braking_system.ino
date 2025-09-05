#include <Servo.h>

Servo myservo1;
Servo myservo2;

void setup() {
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  myservo1.attach(6);
  myservo2.attach(7);
  myservo1.write(140);
  myservo2.write(140);
  // delay(500);
  // brake1();
  // brake2();
}

void brake1() {
  myservo1.write(120);
  delay(300);
  myservo1.write(80);
}

void brake2() {
  myservo2.write(120);
  delay(300);
  myservo2.write(80);
}

void loop() {
}
