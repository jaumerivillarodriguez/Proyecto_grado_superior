#define ledducha 27
#define sensorducha 28
boolean pulsador; //que solo puede tenerr dos estados

void dmaxsetup() {
  pinMode(ledducha,OUTPUT);
  pinMode(sensorducha,INPUT);

}

void dmaxloop() {

  
  if(digitalRead(sensorducha)== HIGH){
    digitalWrite(ledducha,HIGH);
    tiempo_ducha=tiempo_actual;    
  }
  
  tiempo_actual=millis();
  if(tiempo_actual>tiempo_ducha+4000){
    tiempo_ducha=tiempo_actual;
    digitalWrite(ledducha,LOW);
  }
}
