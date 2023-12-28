//Alternative way activating the Lights. (Montion Sensor)
int PIRpin = 5;                     // choose the input pin (for PIR sensor)
int PIRstate = 0;                   // we start, assuming no motion detected
int LED = 4;                        // LED



void setup() {
  pinMode(PIRpin, INPUT);           // initialize the PIR sensor pin as an input:
  pinMode(LED, OUTPUT);             // initialize the LED as output:

}

void loop() {
  PIRstate = digitalRead(PIRpin);   // read the state of the pushbutton value:

  // check if the PIR sensor is triggered. If it is, the PIRstate is HIGH:
  if (PIRstate == HIGH) {
    digitalWrite(4,HIGH);
    }


   }

  }


  

