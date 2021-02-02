// The first section is where to declare global objects and call up additional files the program needs to use.

int testPin = 12; //change the number according to the pin you connected to your LED 

// The second section is for things that only need to be done once at the beginning of the program
void setup() {
  // initialize pin as an OUTPUT
  pinMode(testPin, OUTPUT);
}

// The third section, the loop function, runs over and over again forever
void loop() {
  // turn the LED on
  digitalWrite(testPin, HIGH);
  // wait for a second
  delay(1000);                       
  // turn the LED off
  digitalWrite(testPin, LOW);
  // wait for a second
  delay(1000);                      
}
