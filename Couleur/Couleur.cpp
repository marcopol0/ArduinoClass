#include <Arduino.h>
#include "Couleur.h"

/*Couleur(int pinBlue, int pinGreen, int pinRed);
~Couleur();


void setRed (int red);
void setBlue (int blue);
void setGreen (int green);*/

Couleur::Couleur (int pinBlue, int pinGreen, int pinRed, int serial)
{
	pinMode(pinRed, OUTPUT);
	pinMode(pinGreen, OUTPUT);
	pinMode(pinBlue, OUTPUT);
	analogWrite (pinRed, 0);
	analogWrite (pinBlue, 0);
	analogWrite (pinGreen, 0);
	m_pinRed = pinRed;
	m_pinGreen = pinGreen;
	m_pinBlue = pinBlue;
	Serial.begin (serial);
}
Couleur::Couleur (int pinBlue, int pinGreen, int pinRed)
{
	pinMode(pinRed, OUTPUT);
	pinMode(pinGreen, OUTPUT);
	pinMode(pinBlue, OUTPUT);
	analogWrite (pinRed, 0);
	analogWrite (pinBlue, 0);
	analogWrite (pinGreen, 0);
	m_pinRed = pinRed;
	m_pinGreen = pinGreen;
	m_pinBlue = pinBlue;
	Serial.begin (9600);
	
	//Couleur (pinBlue, pinGreen, pinRed,9600);
	
}
Couleur::~Couleur ()
{
	
}

void Couleur::setRed (int red)
{

	m_red = red;
	
	if (m_red > 255)
	{
		m_red = 255;
	}
	else if (m_red < 0)
	{
		m_red = 0;
	}
	
	
	analogWrite (m_pinRed, m_red);
}
int Couleur::getRed ()
{
	return m_red;
}
void Couleur::setBlue (int blue)
{
	m_blue = blue;
	
	if (m_blue > 255)
	{
		m_blue = 255;
	}
	else if (m_blue < 0)
	{
		m_blue = 0;
	}
	
	analogWrite (m_pinBlue, m_blue);
}
int Couleur::getBlue ()
{
	return m_blue;
}

void Couleur::setGreen (int green)
{
	m_green = green;
	
	if (m_green > 255)
	{
		m_green = 255;
	}
	else if (m_green < 0)
	{
		m_green = 0;
	}
	
	analogWrite (m_pinGreen, m_green);
}
int Couleur::getGreen ()
{
	return m_green;
}

void Couleur::Red ()
{
	m_red = 255;
	m_blue = 0;
	m_green = 0;
	analogWrite (m_pinRed, m_red);
	analogWrite (m_pinBlue, m_blue);
	analogWrite (m_pinGreen, m_green);
}
void Couleur::Blue ()
{
	m_blue = 255;
	m_red = 0;
	m_green = 0;
	analogWrite (m_pinBlue, m_blue);
	analogWrite (m_pinRed, m_red);
	analogWrite (m_pinGreen, m_green);
}

void Couleur::Green ()
{
	m_green = 255;
	m_red = 0;
	m_blue = 0;
	analogWrite (m_pinGreen, m_green);
	analogWrite (m_pinRed, m_red);
	analogWrite (m_pinBlue, m_blue);
}
void Couleur::NoColor ()
{
	m_green = 0;
	m_red = 0;
	m_blue = 0;
	analogWrite (m_pinGreen, m_green);
	analogWrite (m_pinRed, m_red);
	analogWrite (m_pinBlue, m_blue);
}
void Couleur::White ()
{
	m_green = 255;
	m_red = 255;
	m_blue = 255;
	analogWrite (m_pinGreen, m_green);
	analogWrite (m_pinRed, m_red);
	analogWrite (m_pinBlue, m_blue);
}




