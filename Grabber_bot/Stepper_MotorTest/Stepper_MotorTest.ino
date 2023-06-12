#include <Stepper.h>
#define STEPS 200

//steps per revolution = 360/step angle
//360 / 1.8 = 200 steps per revolution

Stepper stepper(STEPS, 20, 21);
#define motorInterfaceType 1
int Pval = 0;
int potVal = 0;

void setup() {
  stepper.setSpeed(1000);
}

void loop() {
  potVal = map(analogRead(A0),0,1024,0,500);
  if (potVal>Pval)
      stepper.step(20);
  if (potVal<Pval)
      stepper.step(-5);

Pval = potVal;

}
