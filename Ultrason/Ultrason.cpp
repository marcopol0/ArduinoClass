#include <Arduino.h>
#include "Ultrason.h"



Ultrason::Ultrason (int pinTrig, int pinEcho)
{
	m_pinTrig = pinTrig;
	m_pinEcho = pinEcho;
	m_valeur = 0;
	m_seuil = 100;
	pinMode(pinTrig, OUTPUT);
	pinMode(pinEcho, INPUT);
	digitalWrite(pinTrig, LOW);
}
Ultrason::~Ultrason ()
{
	
}

void Ultrason::setSeuil (int seuil)
{
	m_seuil = seuil;
}
bool Ultrason::getIsNear ()
{
	m_valeur = getValeur();
	if (m_valeur > m_seuil)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int Ultrason::getPinTrig ()
{
	return m_pinTrig;
}

int Ultrason::getPinEcho ()
{
	return m_pinEcho;
}

int Ultrason::getValeur ()
{
  const long MEASURE_TIMEOUT = 25000L;
  digitalWrite(m_pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(m_pinTrig, LOW);
  
  /* 2) Mesure le temps entre l'envoi de l'impulsion ultrasonique et son écho (si il existe) */
  long measure = pulseIn(m_pinEcho, HIGH, MEASURE_TIMEOUT);
   
  /* 3) Calcul la distance à partir du temps mesuré */
  m_valeur = measure / 2 * 0.3434;
  return m_valeur;
  }