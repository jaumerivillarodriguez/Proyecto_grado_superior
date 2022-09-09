const int LEDaperturaycierre=32;
const int LEDzaperturaycierre=15;
const int BOTONaperturaycierre=14;

//const int ledrojo=1;




void aperturasetup(){
pinMode(LEDaperturaycierre,OUTPUT);
pinMode(LEDzaperturaycierre,OUTPUT);
pinMode(BOTONaperturaycierre,INPUT);
digitalWrite(LEDzaperturaycierre,LOW);
}
void aperturaloop(){



if(digitalRead(BOTONaperturaycierre)== HIGH){
    digitalWrite(LEDaperturaycierre,HIGH);
    tiempo_apertura=tiempo_actual;
    tiempo_cierre=tiempo_actual;
   // tiempo_led=tiempo_actual;
}

if(tiempo_actual>tiempo_apertura+2500){ 
   
    digitalWrite(LEDaperturaycierre,LOW);
    digitalWrite(LEDzaperturaycierre,HIGH);
    }

 if(tiempo_actual>tiempo_cierre+5000){
     digitalWrite(LEDzaperturaycierre,LOW);
     //digitalWrite(ledrojo,HIGH);
       
 }  
 // if(tiempo_actual>tiempo_cierre+7500){
 //    digitalWrite(ledrojo,LOW);
   //  }  
 
tiempo_actual=millis();
}
   



