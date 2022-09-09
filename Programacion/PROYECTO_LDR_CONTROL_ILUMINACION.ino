  // Pin donde se conectan los leds

int pinLed3 = 4;
// Pin analogico de entrada para el LDR
int pinLDR = 0;
 
// Variable donde se almacena el valor del LDR
int valorLDR = 0;  
 
void ldrsetup()
{
  // Configuramos como salidas los pines donde se conectan los led
  
  pinMode(pinLed3, OUTPUT);
  
  //  Configurar el puerto serial
  
}
 
void ldrloop()
{
  // Apagar todos los leds siempre que se inicia el ciclo
 if(valorLDR<768){
  digitalWrite(pinLed3, HIGH);
 }
 
  // Guardamos el valor leido del ADC en una variable
  // El valor leido por el ADC (voltaje) aumenta de manera directamente proporcional
  // con respecto a la luz percibida por el LDR
  valorLDR= analogRead(pinLDR);
  
  // Devolver el valor leido a nuestro monitor serial en el IDE de Arduino
  Serial.println(valorLDR);
 
   
  
  if(valorLDR > 768)
  {
    digitalWrite(pinLed3, LOW);
  }
  

}







