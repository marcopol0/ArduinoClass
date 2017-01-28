#include "SharpPetiteDist.h"

SharpPetiteDist MySensor (0);

double val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* val = 1/(analogRead(0)*0.000439-0.015);    // read the input pin
 if (val > 40)
  {
    Serial.println ("Out of range");
  }
   else if (val < 3)
  {
    Serial.println ("Out of range");
  }
  else
  {
  Serial.println(val);
  }*/
  val = MySensor.getValeur();
  Serial.println (val);
  delay (100);
}
