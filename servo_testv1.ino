#include <Servo.h>

Servo myservo; //create servo object to control a servo

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 myservo.attach(9);
 myservo.write(90); // Set to mid point
}

void loop() {
  for (pos = 90; pos <= 135; pos += 45) {
    // in steps of 45 degrees
    myservo.write(pos);
    delay(1000);
  }
  for (pos = 135; pos >= 135; pos -= 90) {
    //step 90 degress back from 135 should be 45 degrees
    myservo.write(pos);
    delay(1000);
  }
  for (pos = 45; pos <= 45; pos += 45) {
    //steps up to 90 postion again to repeat
    myservo.write(pos);
    delay(1000);
  }

}
