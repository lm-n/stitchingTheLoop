/*  This code was written for the Stitching the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non-commercial use.  
ECS 2018 CC- BY NC SA. Last Update: August 2020*/
 
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
int led2 = 6;
int led3 = 12;

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

/* Debugging Scenario: Maxine wrote the following code for her 
 * Human Interaction Project.  She wants each possible sensor value 
 * to call one of the four light pattern functions:  Help her 
 * debug it.  
*/

/*ACTIVITY SECTION: This is one big loop. Whatever you put in here 
will run over and over and over again.
*/
void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensor);
  Serial.println(sensorValue); //prints the value of the sensor to the serial monitor
  delay(100); //delay for 1/10 of a second
  
  if (sensorValue > 900) {
      lightPattern1();
  }
  if (sensorValue > 750 && sensorValue < 900) {
      lightPattern2();
  }
  if (sensorValue > 500 && sensorValue < 750) {
      lightPattern3();
  }
  if (sensorValue < 500) {
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
