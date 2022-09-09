int ledPin =2;
int inputPin1 = 33; // pulsador 1
int inputPin2 = 34; // pulsador 2
int p1;
int p2;
int value = 0;
 
void limpiezasetup() {
pinMode(ledPin, OUTPUT);
pinMode(inputPin1, INPUT);
pinMode(inputPin2, INPUT);
}
void limpiezaloop(){
 
p1=digitalRead(inputPin1);
p2=digitalRead(inputPin2);
if (p1 == HIGH) { value--; }
else if (p2 == HIGH) { value++; }
value = constrain(value, 0, 255);
analogWrite(ledPin, value);

}
