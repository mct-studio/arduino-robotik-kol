#include <Servo.h>

Servo servo1;
Servo servo2;

int x = 0;
int y = 0;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
}

void loop() {
  x = analogRead(A1);
  y = analogRead(A2);

  servo1.write(map(x, 0, 1023, 0, 180));
  servo2.write(map(y, 0, 1023, 0, 180));  
}
