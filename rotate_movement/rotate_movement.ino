//Evaluation of motion exaggeration: tilting movement from side to side
//DS3218　pulse width: 500~2500μsec

#include <Servo.h>

Servo myservo;
int pos = 90;


void setup() {
  Serial.begin(9600);
  myservo.attach(11, 500, 2500);
  myservo.write(90);


}


//これでdelayを調整すれば速度調整はできるけど、pos通りの角度回ってないからパルス幅で指定する必要がありそう
void loop() {
  for (pos = 90; pos >= 60; pos -= 1) {
    myservo.write(pos);
    delay(5);
  }
  delay(2000);

  for (pos = 60; pos <= 90; pos += 1) {
    // in steps of 1 degree
    myservo.write(pos);
    delay(5);
  }
  delay(4000);
  
  for (pos = 90; pos <= 120; pos += 1) {
    // in steps of 1 degree
    myservo.write(pos);
    delay(5);
  }
  delay(2000);
  for (pos = 120; pos >= 90; pos -= 1) {
    myservo.write(pos);
    delay(5);
  }
  delay(4000);

}
