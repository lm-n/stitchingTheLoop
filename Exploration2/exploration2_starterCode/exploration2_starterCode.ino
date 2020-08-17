/*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non commercial use.  
ECS 2018 CC- BY NC SA.  Last Modified June 2020. */


/*
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program is an EXAMPLE of the many possible solutions.  This code will compile as is.
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

*/
/*  STUDENT META HERE
STUDENT NAME(S)
 Date Written
Brief description of what program does here.
*/

// The first section is where to declare global objects and call up additional files the program needs to use.  
/*NAMING SECTION: We name things to keep track of them easily.
What will you name your other lights?
*/
//using pins 6, 9, and 10:
int led1 = 6;
int led2 = 9;
int led3 = 10;

int blinkCounter = 1;
int heartCounter = 1;

/*SETUP SECTION: Put things here that you only need to do once:
For instance, OUTPUTS (lights)
*/
void setup() {
  // The second section is for things that only need to be done once at the beginning of the program.  
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
}

void loop() {
  /* The third section is for things that happen repeatedly in the program loop
while the program is running. The code is executed in the order coded. */
  on(led1);
  blinkPattern(led2);
  heartBeat(led3);    
  delay(100);
}

// The fourth section is for functions that are called up by the third section.
void blinkPattern(int led) {
  if (blinkCounter == 1) {
    on(led);
  } else if (blinkCounter == 6) {
    off(led);
  } else if(blinkCounter > 10) {
    blinkCounter = 0;
  }
  blinkCounter ++;
}

void heartBeat(int led) {
  if (heartCounter == 1 || heartCounter == 5) {
    on(led);
  } else if (heartCounter == 3 || heartCounter == 7) {
    off(led);
  } else if(heartCounter > 15) {
    heartCounter = 0;
  }
  heartCounter ++;
}

void on(int led) {
  digitalWrite(led, HIGH);
}

void off(int led) {
  digitalWrite(led, LOW);
}
