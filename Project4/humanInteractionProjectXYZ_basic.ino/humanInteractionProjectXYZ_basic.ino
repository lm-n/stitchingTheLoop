/*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2020 GPL V3 for non commercial use.  
ECS 2020 CC- BY NC SA. */

/*
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program is a starter you will need to add code.  This code will compile as is.
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

*/
/*  STUDENT META HERE
STUDENT NAME(S)
 Date Written
Brief description of what program does here.
*/
// The first section is where to declare global variables and call up additional files the program needs to use.  
#include <Adafruit_CircuitPlayground.h> //call the CircuitPlayground library to be able to use the XYZ

int led1 = 6; //name your led pins
float X; //this variable stores X readings from the sensor
float Y; //this variable stores Y readings from the sensor
float Z; //this variable stores Z readings from the sensor
 
void setup() {
  // The second section is for things that only need to be done once at the beginning of the program.  
  CircuitPlayground.begin(); //Set up the CircuitPlayground using its library to use the XYZ
  Serial.begin(9600); //allows you to read your sensor
}
 
void loop() {
  /* The third section is for things that happen repeatedly in the program loop
while the program is running. The code is executed in the order coded. */

  //the part of your code that reads data from the sensor
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();

  //print the values of the sensor to the serial monitor
  Serial.println("  x  |  y   |  z" );
  Serial.print(X);
  Serial.print(" | ");
  Serial.print(Y);
  Serial.print(" | ");
  Serial.println(Z);
 
  delay(100); //delay for 1/10 of a second

  /*Write your actions here. Your sets of if/else statements 
  for your human interaction project along with which lighting patterns 
  you want to call
  */

  lightingPattern1();
}

// The fourth section is for functions that are called up by the third section.

void lightingPattern1(){ //Sample function for a lighting pattern
 digitalWrite(led1,HIGH);
}
