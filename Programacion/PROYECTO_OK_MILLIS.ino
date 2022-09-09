
// variables globales 
unsigned long tiempo_actual=0;  



//variable ducha tiempo ______________________
unsigned long tiempo_ducha=0;
//------------------------------------------
//variable aperturaycierre____________________
unsigned long tiempo_apertura=0;
unsigned long tiempo_cierre=0;

//--------------------------------------------
//variable ducha hidrotermal_____________________
unsigned long tiempo_azulhidro=0;
unsigned long tiempo_rojohidro=0;
//--------------------------------------------
//variable simulacion global robo____________________
unsigned long tiempo_automaticos=0;
unsigned long tiempo_multiusos=0;
unsigned long tiempo_pasillo=0;
unsigned long tiempo_piscina=0;
unsigned long tiempo_recepcion=0;
//------------------------------------------
//Variable sala multiusos__________________________________
//unsigned long tiempo_primero=0;
//unsigned long tiempo_segundo=0;
//unsigned long tiempo_tercero=0;
//unsigned long tiempo_cuarto=0;


//Variable control de afoto____________________________-
unsigned long tiempo_incremento=0;
unsigned long tiempo_decremento=0;
void setup() {



 dmaxsetup();
 yogasetup();
 limpiezasetup();
 ldrsetup();
 alarmsetup();
 MOTORsetup();
aguasetup();
 chicassetup();
 chicossetup();
 aperturasetup();
 hidrosetup();
 iluminacionrobosetup();
 RDFIsetup();
multiusossetup();
solariumsetup();
 aforosetup();
}

void loop() {
dmaxloop();
 yogaloop();
limpiezaloop();
ldrloop();
alarmloop();
MOTORloop();
agualoop();
chicasloop();
 chicosloop();
 aperturaloop();
 hidroloop();
 iluminacionroboloop();
 RDFIloop();
 multiusosloop();
 solariumloop();
aforoloop();
}
