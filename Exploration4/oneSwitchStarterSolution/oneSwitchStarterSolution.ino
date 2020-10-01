/*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non commercial use.  
ECS 2018 CC- BY NC SA. Last Modified October 2020. */

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
int light1 = 10;
int switch1 = 21; 




void setup() {
  // The second section is for things that only need to be done once at the beginning of the program.  
  pinMode(light1, OUTPUT);
  pinMode(switch1, INPUT); //Here we tell our Circuit Playground to read the switch (input) 
  Serial.begin(9600);
}


void loop() {
  /* The third section is for things that happen repeatedly in the program loop
while the program is running. The code is executed in the order coded. */

  int switch1storage = digitalRead(switch1);
    
 if (switch1storage == HIGH) { //
    digitalWrite(light1, HIGH); //If the switch is ON then the light will be on
  }
  else { //
    digitalWrite(light1, LOW); //If the switch is OFF then the light will be off
  }

  //Serial.println(sensorVal); //print the switch value
}

// The fourth section is for functions that are called up by the third section.
