#include <Arduino.h>
#include "SharpPetiteDist.h"



SharpPetiteDist::SharpPetiteDist (int pin)
{
	m_pin = pin;
	m_pente = 0.000439;
	m_offset = -0.015;
	m_seuil = 5;
}
SharpPetiteDist::~SharpPetiteDist ()
{
	
}

void SharpPetiteDist::setSeuil (double seuil)
{
	m_seuil = seuil;
}


void SharpPetiteDist::setPente (double pente)
{
	m_pente = pente;
}

void SharpPetiteDist::setOffset (double offset)
{
	m_offset = offset;
}

bool SharpPetiteDist::getIsNear ()
{
	m_valeur = 1/(analogRead(m_pin)*m_pente+m_offset);
	if (m_valeur > m_seuil)
	{
		return false;
	}
	else
	{
		return true;
	}
}



double SharpPetiteDist::getValeur ()
{
	m_valeur = 1/(analogRead(m_pin)*m_pente+m_offset);
	if ((m_valeur > 50)||(m_valeur < 3))
		m_valeur = -1;		
	
	return m_valeur;
}