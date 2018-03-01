
/* Pressed button selection program
 * Light LED associated with the pressed button
 * This program was developed as a module for a motor control project
 * Possible future development: use array to set LED status
 * 
 * David Parkes
 * 01 March 2018
 */

int LED_STOP = 11; //Red stop
int LED_FORWARD = 12; //Green forward
int LED_REVERSE = 13; //Blue reverse
int BUTTON_STOP = 2; //Select Stop
int BUTTON_FORWARD = 3; //Select Forward
int BUTTON_REVERSE = 4; //Select Reverse
int new_pin; // Declare new_pin variable
int action; // Declare action variable i.e. switch case option


void setup() {
  // put your setup code here, to run once:
pinMode(LED_STOP, OUTPUT);
pinMode(LED_FORWARD, OUTPUT);
pinMode(LED_REVERSE, OUTPUT);
pinMode(BUTTON_STOP, INPUT);
pinMode(BUTTON_FORWARD, INPUT);
pinMode(BUTTON_REVERSE, INPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 2; i < 5; i++){ // Scan for button press
  delay(50);
  new_pin = digitalRead(i);

  if (new_pin == 1){ //If pin is high due to button pressed
     action = i; // Set action varaiable to select approprite switch case
  }
}

switch (action)

{ 
  case 2: // Stop
  digitalWrite(LED_STOP, HIGH);
  digitalWrite(LED_FORWARD, LOW);
  digitalWrite(LED_REVERSE, LOW);
  break;

 case 3: // Forward
  digitalWrite(LED_STOP, LOW);
  digitalWrite(LED_FORWARD, HIGH);
  digitalWrite(LED_REVERSE, LOW);
  break;

 case 4: // Reverse
  digitalWrite(LED_STOP, LOW);
  digitalWrite(LED_FORWARD, LOW);
  digitalWrite(LED_REVERSE, HIGH);
  break;
 
}
}


