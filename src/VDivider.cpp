/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/hydrobenzene/Downloads/SummerClass/VoltageDividder/VDivider/src/VDivider.ino"
void setup();
void loop();
#line 1 "c:/Users/hydrobenzene/Downloads/SummerClass/VoltageDividder/VDivider/src/VDivider.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  delay(64); // uses a tick time of 64ms
  int value = 0; // resets value
  value = map(analogRead(A5), 0, 4095, 0, 255); // maps the light level into a value
  analogWrite(D5, value); // sets the power to the led to the given value
}