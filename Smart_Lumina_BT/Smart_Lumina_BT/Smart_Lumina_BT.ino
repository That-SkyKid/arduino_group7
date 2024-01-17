#define Pin4 4
char caracter;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(4, OUTPUT);
}


void loop() { 
  if(Serial.available()) {
  caracter = Serial.read();
  
    if(caracter == 'a'){ digitalWrite(Pin4, HIGH);}
    if(caracter == 'b'){ digitalWrite(Pin4, LOW);} 
  } 

} 