//Alternative way activating the Lights. (Montion Sensor)
int PIRpin = 5;                     // choose the input pin (for PIR sensor)
int PIRstate = 0;                   // we start, assuming no motion detected
int LED = 4;                        // LED

// Variable to hold the system state
bool isOn = false;

void setup() {
  pinMode(PIRpin, INPUT);           // initialize the PIR sensor pin as an input:
  pinMode(LED, OUTPUT);             // initialize the LED as output:

}

void loop() {
  int pirValue = digitalRead(5);
  
  // If the PIR sensor is triggered, toggle the state is it on or not.
  if(pirValue == HIGH) {
    isOn = !isOn;
    
    // Update the LED state
    digitalWrite(LED, isOn ? HIGH : LOW);
    
    // Wait for the PIR sensor to reset
    delay(5000);
  }
}

  


  


  

