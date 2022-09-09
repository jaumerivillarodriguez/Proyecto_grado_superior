int LED =31;
 int BOTONalarm= 8;
int valalarm = 0; //val se emplea para almacenar el estado del boton
int estadoalarm = 0; // 0 LED apagado, mientras que 1 encendido
int old_valalarm = 0; // almacena el antiguo valor de val
void alarmsetup(){  // definir si la variable es de entrada // o salida.
 pinMode(LED,OUTPUT); // establecer que el pin digital es una señal de salida
 pinMode(BOTONalarm,INPUT); // y BOTON como señal de entrada
}
void alarmloop() {       // loop = realice un lazo continuamente
valalarm= digitalRead(BOTONalarm); // lee el estado del Boton
if ((valalarm == HIGH) && (old_valalarm == LOW)){
estadoalarm=1-estadoalarm;
delay(10);
}
old_valalarm = valalarm; // valor del antiguo estado
if (estadoalarm==1){
 digitalWrite(LED, HIGH); // enciende el LED
}
else{
 digitalWrite(LED,LOW); // apagar el LED
}
}

