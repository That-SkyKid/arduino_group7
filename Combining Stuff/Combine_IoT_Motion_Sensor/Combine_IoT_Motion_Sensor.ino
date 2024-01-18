int PIRpin = 5;               //Choose the Input PIN (For PIR Sensor)
int PIRstate = 0;             // We start assuming no motion detected
int LED = 4;                  //LED


//Variable to hold the system state
bool isOn = false;

//Declaring the "Character" is char (or Character) and receiving any word send to the Arduino Board
char character;
String inputString="";

void setup() {
  Serial.begin(9600);         //Set the baud rate to 9600, Same as the Arduino Maker
  pinMode(PIRpin, INPUT);     //Initialize the PIR sensor pin as an input:
  pinMode(LED, OUTPUT);       //Initialize the LED as output: 
}

void loop() {
  //PIR Sensor
  int pirValue = digitalRead(5); //Read the PIR pin and listening it everytime

  //If the PIR sensor is triggered, toggle the state is it on or not.
  if(pirValue == HIGH){
    isOn = !isOn;

    //Update the LED state
    digitalWrite(LED, isOn ? HIGH : LOW);  //Check if the Motion State is on or off state and determine if the LED should light or not.

    //Wait for the PIR sesnsor to Update to prevent Flashing Lights
    delay(5000);
  }

  //Check if Serial Available and Listening the Serial (COM) to accept 'a' or 'b' for commands from bluetooth.
  if(Serial.available()) {
    character = Serial.read(); 

     if(character == 'a'){ digitalWrite(LED, HIGH);}
     if(character == 'b'){ digitalWrite(LED, LOW);}
  }
}

