//BLYNK INTERGRATION WORK IN PROGRESS!
#define BLYNK_TEMPLATE_ID "TMPL6tChNVtDt"
#define BLYNK_TEMPLATE_NAME "Group 7 Coms"
#define BLYNK_AUTH_TOKEN "yrzsynusKduzjL6yXeZ0p-byRID2vSkd"

//Blynk ID, Name and Auth Token

char ssid[] = "Alvin健业";
char pass[] = "Abc2823356";
// Insert your WiFi credentials.
// Set password to "" for open networks.

//Software Serial on Uno, Nano...
#include <SoftwareSerial.h> 
SoftwareSerial EspSerial(2, 3); // RX, TX

// Your ESP8266 baud rate:
#define ESP8266_BAUD 9600

//ESP Serial
#include <ESP8266_Lib.h>
ESP8266 wifi(&EspSerial);


//Alternative activating the Lights. (Montion Sensor
int PIRpin = 5;                     // choose the input pin (for PIR sensor)
int PIRstate = 0;                   // we start, assuming no motion detected
int LED = 4;                        // LED



void setup() {
  pinMode(PIRpin, INPUT);           // initialize the PIR sensor pin as an input:
  pinMode(LED, OUTPUT);

}

void loop() {
  PIRstate = digitalRead(PIRpin);   // read the state of the pushbutton value:

  // check if the PIR sensor is triggered. If it is, the PIRstate is HIGH:
  if (PIRstate == HIGH) {
    digitalWrite(4,HIGH);
    }

  if (PIRstate == LOW) {
    digitalWrite(4,LOW);
   }

  }


  

