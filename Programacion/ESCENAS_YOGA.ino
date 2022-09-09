int ledR = 11; 
int ledB = 10;
int ledG = 9;
 
//Pin usado como entrada para reconocer el boton:
int pinButton = 7;
//Variable para guardar el estado del boton:
int buttonValue;
//Variable para elegir color.
int count = 0;
 
//Variables auxiliares:
int button_old = 0;
 
void yogasetup() {
 // Inicializo pines de salida:
 pinMode(ledR,OUTPUT);
 pinMode(ledG,OUTPUT);
 pinMode(ledB,OUTPUT);
 //Inicializo pin de entrada:
 pinMode(pinButton,INPUT);
}
 
void yogaloop() 
{
 //Se guarda el estado del pin en la variable
 buttonValue = digitalRead(pinButton);
 
 if(button_old == 0 && buttonValue == 1)
 {
 count++; //Se le suma uno al valor de count
 button_old = 1; //Se cambia el valor auxiliar para reconocer boton presionado
 }
 
 if(button_old == 1 && buttonValue == 0)
 button_old = 0; //Se cambia valor auxiliar para reconocer boton no presionado
 
 if(count > 7)
 count = 0;
 
 color(count); //llamado a funcion que escribe el color del led
}
 
//funcion que permite escribir y combinar colores en led
void color(int colorNumber){
 
 switch(colorNumber){
 
 case 0: analogWrite(ledR,255);
 analogWrite(ledG,0);
 analogWrite(ledB,0);
 break;
 
 case 1: analogWrite(ledR,0);
 analogWrite(ledG,255);
 analogWrite(ledB,0);
 break;
 
 case 2: analogWrite(ledR,0);
 analogWrite(ledG,0);
 analogWrite(ledB,255);
 break;
 
 case 3: analogWrite(ledR,255);
 analogWrite(ledG,255);
 analogWrite(ledB,0);
 break;
 
 case 4: analogWrite(ledR,255);
 analogWrite(ledG,0);
 analogWrite(ledB,255);
 break;
 
 case 5: analogWrite(ledR,0);
 analogWrite(ledG,255);
 analogWrite(ledB,255);
 break;
 
 case 6: analogWrite(ledR,255);
 analogWrite(ledG,255);
 analogWrite(ledB,255);
 break;
 
 case 7: analogWrite(ledR,0);
 analogWrite(ledG,0);
 analogWrite(ledB,0);
 break;
 
 return; 
 }
 
}
