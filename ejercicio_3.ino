// C++ code
//
#include <Servo.h>

int i = 0;

int j = 0;

Servo servo_4;

void setup()
{
  servo_4.attach(4, 500, 2500);

}

void loop()
{
  for (i = 0; i <= 180; i += 1) {
    servo_4.write(i);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (j = 180; j >= 0; j -= 1) {
    servo_4.write(i);
    delay(20); // Wait for 20 millisecond(s)
  }
}
