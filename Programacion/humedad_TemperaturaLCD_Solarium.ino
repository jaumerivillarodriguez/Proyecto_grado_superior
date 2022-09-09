#include <DHT.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
    
LiquidCrystal_I2C lcd1(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//Direccion de LCD

int ledSOLARIUM = 47;
#define DHTPIN 5 //Conectamos el Sensor al pin digital 9
#define DHTTYPE DHT11 
DHT dht1(DHTPIN, DHTTYPE);
void solariumsetup() {
lcd1.begin(16,2);// Indicamos medidas de LCD
pinMode(ledSOLARIUM,OUTPUT);
dht1.begin();
}
void solariumloop() { 
int h = dht1.readHumidity();    // Lee la humedad
int t= dht1.readTemperature();
/////////////////////////////////////////////////// 
lcd1.clear();//Elimina todos los simbolos del LCD
lcd1.setCursor(2,0);//Posiciona la primera letra despues del segmento 5 en linea 1      
lcd1.print(h);//Escribe la humedad        
lcd1.print("% Humedad");
lcd1.setCursor(0,1);
lcd1.print(t); 
lcd1.print("C' Temperatura");              
if(h<=60){
  digitalWrite(ledSOLARIUM,HIGH);
}
else{
  digitalWrite(ledSOLARIUM,LOW);
}

}


