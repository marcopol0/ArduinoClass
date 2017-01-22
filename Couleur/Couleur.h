#ifndef Couleur_h
    
#define Couleur_h
#include <Arduino.h>

class Couleur
{
public:
Couleur(int pinBlue, int pinGreen, int pinRed, int serial);
Couleur(int pinBlue, int pinGreen, int pinRed);

~Couleur();


void setRed (int red);
void setBlue (int blue);
void setGreen (int green);
void Red ();
void Blue ();
void Green ();
void White ();
void NoColor ();
int getRed ();
int getBlue ();
int getGreen ();

private:
int m_pinRed;
int m_pinGreen;
int m_pinBlue;
int m_red;
int m_blue;
int m_green;
};    

	
	
	
	
	
#endif // Fin si