// Evaluation of motion exaggeration: tilting movement from side to side
// Servo: DS3218(pulse width: 500~2500μsec)

#include <Servo.h>

Servo myservo;
int pos = 92; // Reference position: Perpendicular to the ground (机に取り付けた時の垂直を目視で調整した、論文中でいうと0度)

void setup()
{
  Serial.begin(9720);
  myservo.attach(11, 500, 2500);
  myservo.write(92); // Reference position: Perpendicular to the ground
  Serial.println(pos);
  Serial.println("Ready...");
  delay(5000);
  Serial.println("Start");
}

void loop()
{
  // --- #1 -------------------------
  // Measure time for the first loop
  unsigned long startTime = millis(); // Get the current time

  // Tilt 20° in clockwise direction (→ 20°)
  for (pos = 92; pos > 72; pos -= 1)
  {
    myservo.write(pos);
    delay(8); // -> 161ms
  }

  unsigned long endTime = millis();                // Get the current time again
  unsigned long elapsedTime = endTime - startTime; // Calculate the elapsed time
  Serial.print("Time for 1st loop: ");
  Serial.print(elapsedTime);
  Serial.print(", pos: ");
  Serial.println(pos);

  // Wait 2 seconds
  delay(2000);

  // --- #2 -------------------------
  startTime = millis();

  // Tilt 40° in counterclockwise direction (→ -20°)
  for (pos = 72; pos < 112; pos += 1)
  {
    myservo.write(pos);
    delay(8); // -> 322ms
  }

  endTime = millis();
  elapsedTime = endTime - startTime;
  Serial.print("Time for 2nd loop: ");
  Serial.print(elapsedTime);
  Serial.print(", pos: ");
  Serial.println(pos);

  // Wait 2 seconds
  delay(2000);

  // Measure time for the third loop
  startTime = millis();

  // Tilt 40° in clockwise direction (→ 20°)
  for (pos = 112; pos > 72; pos -= 1)
  {
    myservo.write(pos);
    delay(8); // -> 322ms
  }

  endTime = millis();
  elapsedTime = endTime - startTime;
  Serial.print("Time for 3rd loop: ");
  Serial.print(elapsedTime);
  Serial.print(", pos: ");
  Serial.println(pos);

  // Wait 2 seconds
  delay(2000);

  // Measure time for the fourth loop
  startTime = millis();

  // Tilt 40° in counterclockwise direction (→ -20°)
  for (pos = 72; pos < 112; pos += 1)
  {
    myservo.write(pos);
    delay(8); // -> 322ms
  }

  endTime = millis();
  elapsedTime = endTime - startTime;
  Serial.print("Time for 4th loop: ");
  Serial.print(elapsedTime);
  Serial.print(", pos: ");
  Serial.println(pos);
  delay(5000);

  // Tilt 20° in clockwise direction (→ 0°)
  for (pos = 112; pos > 92; pos -= 1)
  {
    myservo.write(pos);
    delay(30);
  }
  delay(5000);
}
