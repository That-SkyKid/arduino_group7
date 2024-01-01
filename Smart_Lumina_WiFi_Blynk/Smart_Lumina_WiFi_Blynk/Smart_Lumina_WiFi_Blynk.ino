//Print Blynk Output
#define BLYNK_PRINT Serial

//Blynk Project ID and Name
#define BLYNK_TEMPLATE_ID "TMPL6tChNVtDt"
#define BLYNK_TEMPLATE_NAME "Group 7 Coms"

//Including the Liabaries
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

//Blynk Auth Code
char auth[] = "yrzsynusKduzjL6yXeZ0p-byRID2vSkd";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Alvin健业";
char pass[] = "Abc2823356";

// Hardware Serial on ESP8266 Shield
#define EspSerial Serial1

// Software Serial on UNO Maker
#include <SoftwareSerial.h>
SoftwareSerial EspSerial(8, 9); // RX, TX

// Your ESP8266 baud rate:
#define ESP8266_BAUD 9600

//Define LED on PIN 4
#define LED 4

ESP8266 wifi(&EspSerial);

//For Desktop Dashboard Blynk
BLYNK_WRITE(V0) //Listening V0 Pin...
{
  int pinValue = param.asInt(); //Assigning Incoming Value from V1 pin as variable

  if(pinValue == 1){
    digitalWrite(4,HIGH);
    //do something when button is pressed (Open the LED)
    } 
  else if (pinValue == 0){
    digitalWrite(4,LOW);
    //do something else when button is pressed (Close the LED)
  } 

  Serial.print("V0 Button value is: "); //Print value output to COM output
  Serial.println(pinValue);
}

void setup()
{ 
  // Debug console
  Serial.begin(9600);

  delay(10);

  // Set ESP8266 baud rate
  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
}


//For Mobile Dashboard Blynk

BLYNK_WRITE(V1) // Listening V1 Pin ....
{
  int pinValue = param.asInt(); //Assigning Incoming Value from V1 pin as variable

  if(pinValue == 1){
    digitalWrite(4,HIGH);
    //do something when button is pressed (Open the LED)
    } 
  
  else if (pinValue == 0){
    digitalWrite(4,LOW);
    //do something else when button is pressed (Close the LED)
  }
  
  Serial.print("V1 Button value is: "); //Print value output to COM output
  Serial.println(pinValue);
}

void loop()
{
  Blynk.run();
}