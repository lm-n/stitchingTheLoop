/*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non-commercial use.  
ECS 2018 CC- BY NC SA. Last modified September 2020. */
 
/*
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program has problems with it that you will need to fix.  
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
*/


/*NAMING SECTION: We name things to keep track of them easily.
What will you name your other lights?
*/
int light1 = 10;
int light2 = 6;


/*SETUP SECTION: Put things here that you only need to do once:
For instance, OUTPUTS (lights)
*/
void setup() {
   pinMode(light1, OUTPUT);
   pinMode(light2, OUTPUT);
}


/* Debugging Scenario: Alicia wants the two lights to blink 
 * on and off together every second.  She wrote the following 
 * code.  Help her debug it.  
*/


/*ACTIVITY SECTION: This is one big loop. Whatever you put in here 
will run over and over and over again.
*/
void loop() {
  digitalWrite(light1, HIGH); //Turn the light on 
  delay(1000);
  digitalWrite(light1, LOW); //Turn the light off
  delay(1000);
  digitalWrite(light2, HIGH); //Turn the light on 
  delay(1000);
  digitalWrite(light2, LOW); //Turn the light off 
  delay(1000);
}


/*BUILDING BLOCKS SECTION: write functions that you can call 
 * when you want
 */
