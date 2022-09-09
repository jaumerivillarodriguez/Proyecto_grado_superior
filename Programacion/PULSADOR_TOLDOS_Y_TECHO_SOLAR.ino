 int MOTORTOLDOS =19;
 int BOTONTOLDOS = 6;
int valTOLDOS = 0; //val se emplea para almacenar el estado del boton
int estadoTOLDOS = 0; // 0 LED apagado, mientras que 1 encendido
int old_valTOLDOS = 0; // almacena el antiguo valor de val
void MOTORsetup(){  // definir si la variable es de entrada // o salida.
 pinMode(MOTORTOLDOS,OUTPUT); // establecer que el pin digital es una señal de salida
 pinMode(BOTONTOLDOS,INPUT); // y BOTON como señal de entrada
}
void MOTORloop() {       // loop = realice un lazo continuamente
valTOLDOS= digitalRead(BOTONTOLDOS); // lee el estado del Boton
if ((valTOLDOS == HIGH) && (old_valTOLDOS == LOW)){
estadoTOLDOS=1-estadoTOLDOS;
delay(10);
}
old_valTOLDOS = valTOLDOS; // valor del antiguo estado
if (estadoTOLDOS==1){
 digitalWrite(MOTORTOLDOS, HIGH); // enciende el LED
}
else{
 digitalWrite(MOTORTOLDOS,LOW); // apagar el LED
}
}

