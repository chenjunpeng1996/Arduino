#include "Arduino.h"
#include "LTimer.h"
#include "include.h"

int led0 = 7;
int led1 = 6;
int val0 = 0;
int val1 = 0;
INCLUDE A;
// instantiation
LTimer timer0(LTIMER_0);
LTimer timer1(LTIMER_1);

// callback function for timer0
void _callback0(void *usr_data)
{
  val0 = !val0;
  A.DWrite(led0,val0);
}

// callback function for timer1
void _callback1(void *usr_data)
{
  val1 = !val1;
  A.DWrite(led1, val1);
}

void setup() {
  Serial.begin(115200);

  // initialization
  timer0.begin();
  timer1.begin();

  // start the execution
  timer0.start(500, LTIMER_REPEAT_MODE, _callback0, NULL);
  timer1.start(250, LTIMER_REPEAT_MODE, _callback1, NULL);
}

void loop() {
}