int LDR_entrada=30;
int LDR_salida=46;
int ledm=13;
int contador=0;

void aforosetup() {
  pinMode(LDR_entrada,INPUT);
  pinMode(LDR_salida,INPUT);
  pinMode(ledm,OUTPUT);
  digitalWrite(ledm,LOW);
  Serial.begin(9600);

}

void aforoloop() {

 if(HIGH!=digitalRead(LDR_entrada)){
  contador++;
  tiempo_incremento=tiempo_actual;
  tiempo_decremento=tiempo_actual;
   }
   delay(10);
   
if(HIGH!=digitalRead(LDR_salida)){
  contador--;
}
if(contador>=3){
  digitalWrite(ledm,HIGH);
  delay(10);

  
}
else{
  digitalWrite(ledm,LOW);
}
Serial.println(contador);

//delay(1000);
}

