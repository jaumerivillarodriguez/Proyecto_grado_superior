//Control movimiento baño chicos

byte sensorpir = 22;
byte led =23 ;


void chicossetup()
{
  pinMode(sensorpir,INPUT);
  pinMode(led,OUTPUT);

}


void chicosloop()
{
  
   int valory = digitalRead(sensorpir);
  
  if(valory == HIGH){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}
