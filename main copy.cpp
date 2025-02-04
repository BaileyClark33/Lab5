//=====[Libraries]=============================================================

#include "arm_book_lib.h"
#include "mbed.h"
#define DUTY_MIN 0.025 // Duty cycle is pulse_width/period
#define DUTY_MAX 0.125
#define PERIOD 0.02 // Units of period is seconds

//=====[Main function, the program entry point after power on or reset]========

PwmOut servo(PF_9); // Here is where we declare the object

int main() {
  while (true) {
    servo.period(PERIOD);
    servo.write(0.025);

    delay(5000);

    servo.period(PERIOD);
    servo.write(0.111);
    delay(5000);
  }
}
