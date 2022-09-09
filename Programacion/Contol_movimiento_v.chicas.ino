//control movimiento baño chicas
byte sensorpirj = 24;
byte ledj =25 ;


void chicassetup() {
  
  pinMode(ledj,OUTPUT);    // PIN 3 como salida led
  pinMode(sensorpirj,INPUT);     // PIN 2 como entrada sensor PIR
}

void chicasloop() {
  
  int valorj = digitalRead(sensorpir);
  
  if(valorj == HIGH){
    digitalWrite(ledj,HIGH);
  }else{
    digitalWrite(ledj,LOW);
  }
}
