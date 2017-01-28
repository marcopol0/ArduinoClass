#ifndef SharpPetiteDist_h
// si Morse_h n'est pas défini
    
#define SharpPetiteDist_h
#include <Arduino.h>

class SharpPetiteDist
{
public:
SharpPetiteDist(int pin);
~SharpPetiteDist();


double getValeur();
void setSeuil (double seuil);
bool getIsNear();
void  setPente (double pente);
void setOffset (double offset);

private:
int m_pin;
double m_pente;
double m_offset;
double m_valeur;
double m_seuil;

};    

	
	
	
	
	
#endif // Fin si