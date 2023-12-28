#include <ESP8266_Lib.h>
#include <SoftwareSerial.h>
SoftwareSerial EspSerial(2, 3); // RX, TX

// Your ESP8266 baud rate:
#define ESP8266_BAUD 9600

ESP8266 wifi(&EspSerial);

void setup()
{
 // Debug console
 Serial.begin(9600);
 delay(10);
 // First open a connection at 115200
 EspSerial.begin(9600);
 delay(10);
 // Send AT command to set Wifi module's baudrate to 9600
 EspSerial.println("AT+UART=115200,8,1,0,0");
 delay(10);
 // End the connection
 EspSerial.end();
 // Reopen the connection at 9600
 EspSerial.begin(115200);
 EspSerial.println("AT");
}
void loop()
{
}
