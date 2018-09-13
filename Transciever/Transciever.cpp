#include <Arduino.h>

//Channel 1: Roll
//Channel 2: Pitch
//Channel 3: Throttle
//Channel 4: Yaw
//Channel 5: Triggers on Remote
//Channel 6: Middle Switch
//Channel 7: Trim
//Channel 8: Nothing

void setup() {
Serial.begin(9600);
pinMode(4,INPUT);
}

void loop() {
int channell,channel2,channel3,channel4,channel5,channel6,channel7,channel8;
if(pulseIn(4,HIGH) > 4000)
{
  channell = pulseIn(4,HIGH);
  channel2 = pulseIn(4,HIGH);
  channel3 = pulseIn(4,HIGH);
  channel4 = pulseIn(4,HIGH);
  channel5 = pulseIn(4,HIGH);
  channel6 = pulseIn(4,HIGH);
  channel7 = pulseIn(4,HIGH);
  channel8 = pulseIn(4,HIGH);
}
 Serial.print("CH");
 Serial.print(" ");
 Serial.print(channel8);
  Serial.println();

}
