/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

const int rightWingPin = 3;
const int leftWingPin = 5;

Servo rightWing;  
Servo leftWing;
unsigned long previousMillis = 0;
const long interval = 100;
int counter = 0;

int pos = 0;    // variable to store the servo position

void setup() {
  rightWing.attach(rightWingPin);  // attaches the servo on pin 9 to the servo object
  rightWing.write(0);

  leftWing.attach(leftWingPin);  // attaches the servo on pin 9 to the servo object
  leftWing.write(180);
}

void loop() {

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
    if(counter % 2 == 0){
      rightWing.write(30);
      leftWing.write(150);
      counter++;
    } else {
      rightWing.write(120);
      leftWing.write(60);
      counter++;
    }
  }
}
