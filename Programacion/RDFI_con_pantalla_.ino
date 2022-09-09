 #include <LiquidCrystal_I2C.h>
    #include <Wire.h>
    #include <SPI.h>
#include <MFRC522.h>
int ledacceso=48; 
const int RST_PIN = 49;        // Pin 9 para el reset del RC522
const int SS_PIN = 53;        // Pin 10 para el SS (SDA) del RC522
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Crear instancia del MFRC522
LiquidCrystal_I2C lcd(0x21, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//Direccion de LCD
 
byte validKey1[4] = { 0x0C, 0x17, 0xAB, 0x29 };  // Ejemplo de clave valida
 
//Función para comparar dos vectores
bool isEqualArray(byte* arrayA, byte* arrayB, int length)
{
  for (int index = 0; index < length; index++)
  {
    if (arrayA[index] != arrayB[index]) return false;
  }
  return true;
}
 
void RDFIsetup() {
  pinMode(ledacceso,OUTPUT);
  digitalWrite(ledacceso,LOW);
  SPI.begin();        // Iniciar SPI
  mfrc522.PCD_Init(); // Iniciar MFRC522
 lcd.begin(16,2);
}
 
void RDFIloop() {
 
  
  if (mfrc522.PICC_IsNewCardPresent()){
    
    if (mfrc522.PICC_ReadCardSerial()){
      
     
      if (isEqualArray(mfrc522.uid.uidByte, validKey1, 4)){
        // tiempo_ledRDFI=tiempo_actual;
         //tiempo_led=tiempo_actual;
         lcd.clear();//Elimina todos los simbolos del LCD
      lcd.setCursor(0,0);
       lcd.print("BIENVENIDO");
        
        
      
        

      digitalWrite(ledacceso,HIGH);
         }
      else{
       
   lcd.clear();
       digitalWrite(ledacceso,LOW);
     lcd.print("ACCESO DENEGADO");

       }
     
   
    }
       
     
      
      mfrc522.PICC_HaltA();
    }
  
    }
     
  
  
