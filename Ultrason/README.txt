Cette classe permet d'utiliser les capteurs ultrason
#include "Suiveur.h"

ultrason(int pinTrig, int pinEcho)
	Donnez les pins que vous utilisez avec le capteur
	You have to give the pins you use

int getPinTrig/getPinEcho()
	Donne la pin utilisé
	Give pins you used

int getValeur()
	Renvoie la valeur du capteur (converti en mètre) 
	Give the value of the sensor (converted in meter)

void setSeuil (int seuil)
	Définit un nouveau seuil
	Define a new limit

bool getIsNear();
	Renvoie true si c'est supérieur au seuil
	Renvoie false si c'est inférieur au seuil
	Send true if you are near
	send false if you are far
	Don't forget to modify the limit