
/*  This code was written for the Stitch the Loop e-textiles curriculum by the
Exploring Computer Science e-textiles team. ECS 2018 GPL V3 for non commercial use.  
ECS 2018 CC- BY NC SA. Latest Update January 2021.  */

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
#include <Wire.h> \importing files or classes
#include <SPI.h>
#include <Adafruit_CircuitPlayground.h> //load Circuit Playground library



int sensor = A5; //Use A5 for light sensor, change value to A4 for sound sensor
int brightness = 0;
bool sound = false;//not in starter file


void setup() {
  // The second section is for things that only need to be done once at the beginning of the program.  
    CircuitPlayground.begin();
  pinMode(sensor, INPUT); //sets sensor to INPUT
  Serial.begin(9600); //initializes the communication to the serial monitor
}



void loop() {
  /* The third section is for things that happen repeatedly in the program loop
while the program is running. The code is executed in the order coded. */

  // read the value from the sensor:
  brightness = analogRead(sensor);
  Serial.println(brightness);

  if (sound)
    CircuitPlayground.playTone(brightness, 100);
  else
    delay(100);
    
  //your code goes here:
  //this can also be done with an if-else-if chain
  if (brightness >= 950) {
    light10();
  }
  if (brightness >= 700 && brightness < 950) {
    light8();
  }
  if (brightness >= 425 && brightness < 700) {
    light6();
  }
  if (brightness >= 150 && brightness < 425) {
    light4();
  }
  if (brightness >= 75 && brightness < 150) {
    light2();
  }
  if (brightness < 75){
    light0();
  }
}

// The fourth section is for functions that are called up by the third section.
void light0() {
  CircuitPlayground.clearPixels();
}

void light2() {
  CircuitPlayground.clearPixels();
  
  CircuitPlayground.setPixelColor(0, 0x0000FF);
  CircuitPlayground.setPixelColor(1, 0x0000FF);
}

void light4() {
  CircuitPlayground.clearPixels();
  
  CircuitPlayground.setPixelColor(0, 0x0000FF);
  CircuitPlayground.setPixelColor(1, 0x0000FF);
  CircuitPlayground.setPixelColor(2, 0x00FF00); 
  CircuitPlayground.setPixelColor(3, 0x00FF00);
}

void light6() {
  CircuitPlayground.clearPixels();

  CircuitPlayground.setPixelColor(0, 0x0000FF);
  CircuitPlayground.setPixelColor(1, 0x0000FF);
  CircuitPlayground.setPixelColor(2, 0x00FF00); 
  CircuitPlayground.setPixelColor(3, 0x00FF00);
  CircuitPlayground.setPixelColor(4, 0xFFCC00);
  CircuitPlayground.setPixelColor(5, 0xFFCC00);
}

void light8() {
  CircuitPlayground.clearPixels();
  
  CircuitPlayground.setPixelColor(0, 0x0000FF);
  CircuitPlayground.setPixelColor(1, 0x0000FF);
  CircuitPlayground.setPixelColor(2, 0x00FF00); 
  CircuitPlayground.setPixelColor(3, 0x00FF00);
  CircuitPlayground.setPixelColor(4, 0xFFCC00);
  CircuitPlayground.setPixelColor(5, 0xFFCC00);
  CircuitPlayground.setPixelColor(6, 0xFF3300);
  CircuitPlayground.setPixelColor(7, 0xFF3300);
}

void light10() {
  CircuitPlayground.clearPixels();
  
  CircuitPlayground.setPixelColor(0, 0x0000FF);
  CircuitPlayground.setPixelColor(1, 0x0000FF);
  CircuitPlayground.setPixelColor(2, 0x00FF00); 
  CircuitPlayground.setPixelColor(3, 0x00FF00);
  CircuitPlayground.setPixelColor(4, 0xFFCC00);
  CircuitPlayground.setPixelColor(5, 0xFFCC00);
  CircuitPlayground.setPixelColor(6, 0xFF3300);
  CircuitPlayground.setPixelColor(7, 0xFF3300);
  CircuitPlayground.setPixelColor(8, 0xFF0000);
  CircuitPlayground.setPixelColor(9, 0xFF0000);
}
