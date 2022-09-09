#include <DHT.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd2(0x26, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//Direccion de LCD


#define DHTPIN 26 //Conectamos el Sensor al pin digital 9
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);
void multiusossetup() {
//lcd1.begin(16,2);// Indicamos medidas de LCD
lcd2.begin(16,2);
dht.begin();
}
void multiusosloop() { 
int h = dht.readHumidity();    // Lee la humedad
int t= dht.readTemperature();
/////////////////////////////////////////////////// 



lcd2.clear();//Elimina todos los simbolos del LCD
lcd2.setCursor(2,0);//Posiciona la primera letra despues del segmento 5 en linea 1    
lcd2.print(h);//Escribe la humedad         
lcd2.print("% Humedad ");
lcd2.setCursor(0,1);
lcd2.print(t);
lcd2.print("C' Temperatura");
}

















//if(tiempo_actual>tiempo_tercero+2000){
 


//lcd2.clear();//Elimina todos los simbolos del LCD
//lcd2.setCursor(0,0);//Posiciona la primera letra despues del segmento 5 en linea 1              
//lcd2.print("Humedad Relativa ");
//lcd2.setCursor(6,1);
//lcd2.print(h);//Escribe la humedad
//lcd2.print(" %");  

//}                   
//if(tiempo_actual>tiempo_primero+4000){


///////////////////////////////////////////////////              
//lcd2.clear();
//lcd2.setCursor(3,0);
//lcd2.print("Temperatura "); 
//lcd2.setCursor(6,1);
//lcd2.print(t);//Escribe la temperatura
//lcd2.print(" C'");
                  
//}
///////////////////////////////////////////////////          
//if(tiempo_actual>tiempo_segundo+6000){

//lcd2.clear();
//lcd2.setCursor(1,0);
//lcd2.print("PROYECTO FINAL");
//lcd2.setCursor(1,1);
//lcd2.print("JAUME  RIVILLA"); 


//}
//if(tiempo_actual>tiempo_cuarto+8000){
 //tiempo_tercero=0;
//}

//tiempo_actual=millis();                   
 

//}
