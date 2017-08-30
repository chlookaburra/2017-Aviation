/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

const int rightWingPin = 5;
const int leftWingPin = 3;

Servo rightWing;
Servo leftWing;
unsigned long previousMillis = 0;
const long interval = 100; //150
int counter = 0;

int pos = 0;    // variable to store the servo position

void setup() {
  rightWing.attach(rightWingPin);  // attaches the servo on pin 9 to the servo object
  rightWing.write(90);

  leftWing.attach(leftWingPin);  // attaches the servo on pin 9 to the servo object
  leftWing.write(90);
}

void loop() {

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
    if (counter % 2 == 0) {
      rightWing.write(30)fest; //40
      leftWing.write(150); //130
      counter++;
    } else {
      rightWing.write(160); //130
      leftWing.write(30); //40
      counter++;
    }
  }


}
