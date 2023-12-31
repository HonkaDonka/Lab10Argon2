/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/vinso/Documents/CTDIoT2023/Lab10Argon2/src/Lab10Argon2.ino"
void setup();
void loop();
#line 1 "c:/Users/vinso/Documents/CTDIoT2023/Lab10Argon2/src/Lab10Argon2.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

#define LEDPIN D3
#define BUTTONPIN D2

void setup() {
  Serial1.begin(9600);
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT);
}

void loop() {
  if (Serial1.available() > 0) {
    byte value = Serial1.read();
    switch (value)
    {
    case 48:
      digitalWrite(LEDPIN, LOW);
      break;
    case 49:
      digitalWrite(LEDPIN, HIGH);
      break;
    case 63:
      Serial1.print(digitalRead(BUTTONPIN));
      break;
    default:
      Serial1.print("X");
      break;
    }
  }
}