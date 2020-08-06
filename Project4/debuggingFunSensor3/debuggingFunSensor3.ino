/*  This code was written for the Stitching the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non-commercial use.  
ECS 2018 CC- BY NC SA.  Last Update: August 2020*/
 
/*
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program has problems with it that you will need to fix.  
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
*/

/*NAMING SECTION: We name things to keep track of them easily.
What will you name your other lights?
*/
//Change below to match the pins of your project:
int sensor = A4; //name your sensor (A4 is the sound sensor, A5 is the light sensor)
int led1 = 9;
int led2 = 3;
int led3 = 2;

int sensorValue;  //this variable stores readings from the sensor


/*SETUP SECTION: Put things here that you only need to do once:
For instance, OUTPUTS (lights)
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(sensor, INPUT); //sets sensor to INPUT

  Serial.begin(9600); //initializes the communication to the serial monitor
}

/* Debugging Scenario:  Harume wrote the following code for her 
 * Human Sensor Project.  She wants to see 
 * lightPattern3() for sensor readings greater than or equal to 1000, 
 * lightPattern2() for readings between 750 and 1000 including 750, 
 * lightPattern1() for readings between 500 and 750 including 500, 
 * and lightPattern4() for readings below 500.  
 * Help her debug it.  
*/

/*ACTIVITY SECTION: This is one big loop. Whatever you put in here 
will run over and over and over again.
*/
void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensor);
  Serial.println(sensorValue); //prints the value of the sensor to the serial monitor
  delay(100); //delay for 1/10 of a second
  
  if(sensorValue >= 500) {
      lightPattern1();
  }
  else if(sensorValue >= 750) {
      lightPattern2();
  }
  else if (sensorValue >= 1000) {
      lightPattern3();
  }
  else {
      lightPattern4();
  }
}

/*BUILDING BLOCKS SECTION: write functions that you can call 
 * when you want
 */
void lightPattern1() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void lightPattern2() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
}

void lightPattern3() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
}

void lightPattern4() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
}
