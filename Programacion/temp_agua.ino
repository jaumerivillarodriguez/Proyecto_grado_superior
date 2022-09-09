#include "max6675.h"
  
int thermoDO=18;
int thermoCS=17;
int thermoCLK=16;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);
int vccPin=3;
int gndPin=2;


void aguasetup() {
  Serial.begin(9600);
  pinMode(vccPin,OUTPUT);digitalWrite(vccPin,HIGH);
  pinMode(gndPin,OUTPUT);digitalWrite(gndPin,LOW);
  
  Serial.println("MAX6675 test");
  delay(10);
  

}

void agualoop() {
  Serial.print("C = ");
  Serial.println(thermocouple.readCelsius());
  delay(10);

}
