/*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non commercial use.  
ECS 2018 CC- BY NC SA. Lastest Update August 2020 */

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
int led1 = 6; //name your led pins

int mySensor = A5; //name your sensor (for the light sensor use A5, for the sound sensor use A4)
int sensorStorage;  //this variable stores readings from the sensor

void setup() {
  // The second section is for things that only need to be done once at the beginning of the program.  
  pinMode(led1, OUTPUT);   //set your led pin to OUTPUT
  pinMode(mySensor, INPUT); //sets your sensor to INPUT
  Serial.begin(9600); //allows you to read your sensor
}

void loop() {
  /* The third section is for things that happen repeatedly in the program loop
while the program is running. The code is executed in the order coded. */

  sensorStorage = analogRead(mySensor); //the part of your code that reads data from the sensor
  Serial.println(sensorStorage); //prints the value of the sensor to the serial monitor
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
