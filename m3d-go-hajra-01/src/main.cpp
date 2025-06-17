#include <M3DGo.h>


// THIS IS how we define a funciton, it doesn't execute
void setup() {
  

  // This is how we call a function, it woll e
  go.begin();

  go.delay(100);
  go.forward();
  go.delay(2000);
  go.spinAngle(90);
  go.delay(2000);
  go.forward(100);
}

void loop() {
  // put your main code here, to run repeatedly:
}
 