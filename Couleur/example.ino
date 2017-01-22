#include "Couleur.h"


Couleur rgb (10, 9, 11);
//int RedPin = 11; //the Red pin connects to digital pin 11 on the arduino
//int BluePin = 10; //the Blue pin connects to digital pin 10 on the arduino
//int GreenPin = 9 ;//the Green pin connects to digital pin 11 on the arduino
int value; //this will hold the value of a for loop we will create

void setup() { 
}

void loop()
{
for (value = 255; value>0; value--){//counts down
  rgb.setGreen(value); //val will be 255 initially
  rgb.setBlue(255-value); //val will be initially 0 initially
  rgb.setRed(128-value);//val will be initially 127
delay(1);
}
for (value = 0; value <255; value++)//counts up
{   rgb.setGreen(value);//val will be 0 initially
    rgb.setBlue(255-value);//val will be 255 initially
    rgb.setRed(128-value);//val will be 255 initially
    delay (1);
}
delay (1000);
rgb.Green();
delay (1000);
rgb.Blue();
delay (1000);
rgb.Red();
delay (1000);
rgb.White ();
delay (1000);
rgb.NoColor ();
delay (1000);

}

