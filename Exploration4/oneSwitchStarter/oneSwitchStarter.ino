
 /*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non commercial use.  
ECS 2018 CC- BY NC SA. Last modified September 2020 */

/*
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
This program is a starter you will need to add code.  This code will not compile as is.
◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇

*/
/*  STUDENT META HERE
STUDENT NAME(S)
 Date Written
Brief description of what program does here.
*/

 // The first section is where to declare global objects and call up additional files the program needs to use.  
 /* Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V. This configuration causes the input to
  read HIGH when the switch is open, and LOW when it is closed.

 In other words, when the switch is 'on' (closed/connected), it will read as LOW. 
 If the switch is 'off' (open/disconnected), it will read as HIGH.

 */

 int light1 = 10;
 


void setup() {
  // The second section is for things that only need to be done once at the beginning of the program.  
  
  pinMode(light1, OUTPUT);

}

/*ACTIVITY SECTION: This is one big loop. Whatever you put in here 
will run over and over and over again.
*/
void loop() {
  // The second section is for things that only need to be done once at the beginning of the program.  
  int switch1storage = digitalRead(switch1);
    


}

// The fourth section is for functions that are called up by the third section.
