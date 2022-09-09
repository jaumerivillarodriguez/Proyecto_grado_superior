// Práctica encender y apagar un LED a través de botón pulsador
const int LEDr=45;
const int LEDa=12;
const int BOTON=29;

void hidrosetup(){
pinMode(LEDr,OUTPUT);
pinMode(LEDa,OUTPUT);
pinMode(BOTON,INPUT);
}
void hidroloop(){
if  (digitalRead(BOTON)==HIGH){
digitalWrite(LEDr,HIGH);
tiempo_azulhidro=tiempo_actual;
tiempo_rojohidro=tiempo_actual;
}
if(tiempo_actual>tiempo_azulhidro+2500){
  digitalWrite(LEDr,LOW);
  digitalWrite(LEDa,HIGH);
}
if(tiempo_actual>tiempo_rojohidro+5000){
  digitalWrite(LEDa,LOW);
  digitalWrite(LEDr,HIGH);
}
if(tiempo_actual>tiempo_azulhidro+7500){
  digitalWrite(LEDr,LOW);
  digitalWrite(LEDa,HIGH);
}
if(tiempo_actual>tiempo_rojohidro+10000){
  digitalWrite(LEDa,LOW);
}

tiempo_actual=millis();
}

