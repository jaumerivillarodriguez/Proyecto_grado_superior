int ledautomaticos=43;
int ledmultiusos=41;
int ledpasillo=40;
int ledpiscina=44;
int ledrecepcion=42;
int BOTONrobo=3;//pulsador robo********************************************************
int pulsadorautomaticos= 37;//pulsador automaticos*********************************************
int valorautomaticos = 0; 
int estadoautomaticos = 0; 
int old_valorautomaticos = 0; 
int pulsadormultiusos= 35;//pulsador sala multiusos****************************************************
int valormultiusos = 0; 
int estadomultiusos = 0; 
int old_valormultiusos = 0;  
int pulsadorpasillo= 39;//pulsador pasillo********************************************
int valorpasillo= 0; 
int estadopasillo = 0; 
int old_valorpasillo = 0; 
int pulsadorpiscina= 38;//pulsador piscina******************************************
int valorpiscina = 0;
int estadopiscina = 0; 
int old_valorpiscina = 0; 
int pulsadorrecepcion= 36;//pulsador recepcion************************************
int valorrecepcion = 0;
int estadorecepcion = 0;
int old_valorrecepcion = 0; 



void iluminacionrobosetup(){
pinMode(ledautomaticos,OUTPUT);
pinMode(ledmultiusos,OUTPUT);
pinMode(ledpasillo,OUTPUT);
pinMode(ledpiscina,OUTPUT);
pinMode(ledrecepcion,OUTPUT);
pinMode(BOTONrobo,INPUT);
pinMode(pulsadorautomaticos,INPUT);
pinMode(pulsadormultiusos,INPUT);
pinMode(pulsadorpasillo,INPUT);
pinMode(pulsadorpiscina,INPUT);
pinMode(pulsadorrecepcion,INPUT);
digitalWrite(ledpiscina,LOW);




}
//**********************ILUMINACION******************************************************
void iluminacionroboloop(){
  //valorautomaticos= digitalRead(pulsadorautomaticos); // lee el estado del Boton
//if ((valorautomaticos == HIGH) && (old_valorautomaticos == LOW)){
//estadoautomaticos=1-estadoautomaticos;

//}
//old_valorautomaticos = valorautomaticos; // valor del antiguo estado
//if (estadoautomaticos==1){
 //digitalWrite(ledautomaticos, HIGH); // enciende el LED
//}
//else{
 //digitalWrite(ledautomaticos,LOW); // apagar el LED
//}
//valormultiusos= digitalRead(pulsadormultiusos); // lee el estado del Boton
//if ((valormultiusos == HIGH) && (old_valormultiusos == LOW)){
//estadomultiusos=1-estadomultiusos;

//}
//old_valormultiusos = valormultiusos; // valor del antiguo estado
//if (estadomultiusos==1){
 //digitalWrite(ledmultiusos, HIGH); // enciende el LED
//}
//else{
 //digitalWrite(ledmultiusos,LOW); // apagar el LED
//}
//valorpasillo= digitalRead(pulsadorpasillo); // lee el estado del Boton
//if ((valorpasillo == HIGH) && (old_valorpasillo== LOW)){
//estadopasillo=1-estadopasillo;

//}
//old_valorpasillo = valorpasillo; // valor del antiguo estado
//if (estadopasillo==1){
 //digitalWrite(ledpasillo, HIGH); // enciende el LED
//}
//else{
 //digitalWrite(ledpasillo,LOW); // apagar el LED
//}
//valorpiscina= digitalRead(pulsadorpiscina); // lee el estado del Boton
//if ((valorpiscina == HIGH) && (old_valorpiscina == LOW)){
//estadopiscina=1-estadopiscina;

//}
//old_valorpiscina = valorpiscina; // valor del antiguo estado
//if (estadopiscina==1){
 //digitalWrite(ledpiscina, HIGH); // enciende el LED
//}
//else{
 //digitalWrite(ledpiscina,LOW); // apagar el LED
//}
//valorrecepcion= digitalRead(pulsadorrecepcion); // lee el estado del Boton
//if ((valorrecepcion == HIGH) && (old_valorrecepcion == LOW)){
//estadorecepcion=1-estadorecepcion;

//}
//old_valorrecepcion = valorrecepcion; // valor del antiguo estado
//if (estadorecepcion==1){
 //digitalWrite(ledrecepcion, HIGH); // enciende el LED
//}
//else{
 //digitalWrite(ledrecepcion,LOW); // apagar el LED
//}
//**************************************simulacion nocturna***************************************************

 
if (digitalRead(BOTONrobo)){
  digitalWrite(ledautomaticos,HIGH);
  tiempo_automaticos=tiempo_actual;
  tiempo_multiusos=tiempo_actual;
 tiempo_pasillo=tiempo_actual;
 tiempo_piscina=tiempo_actual;
 tiempo_recepcion=tiempo_actual;
}
if(tiempo_actual>tiempo_automaticos+1500){
  digitalWrite(ledautomaticos,LOW);
digitalWrite(ledmultiusos,HIGH);
}
if(tiempo_actual>tiempo_multiusos+3000){
digitalWrite(ledmultiusos,LOW);
digitalWrite(ledpasillo,HIGH);
}
if(tiempo_actual>tiempo_pasillo+4500){
digitalWrite(ledpasillo,LOW);
digitalWrite(ledpiscina,HIGH);
}
if(tiempo_actual>tiempo_piscina+6000){
digitalWrite(ledpiscina,LOW);
digitalWrite(ledrecepcion,HIGH);
}
if(tiempo_actual>tiempo_recepcion+7500){
digitalWrite(ledrecepcion,LOW);
}
tiempo_actual=millis();

}





