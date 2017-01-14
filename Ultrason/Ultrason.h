#ifndef Ultrason_h
    
#define Ultrason_h
#include <Arduino.h>

class Ultrason
{
public:
Ultrason(int pinTrig, int pinEcho);
~Ultrason();

int getPinTrig();
int getPinEcho();
int getValeur();
void setSeuil (int seuil);
bool getIsNear();

private:
int m_pinTrig;
int m_pinEcho;
long m_valeur;
int m_seuil;
bool m_near;
};    

	
	
	
	
	
#endif // Fin si