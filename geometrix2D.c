//
//
//Revision contenu
//
//Adaptation monnaye - 
//
//Auteur Ignacio Ito

#include<stdlib.h>
#include<stdio.h>

point symetrieX(Point p){
	Point sym;
	sym.x = p.x;
	sym.y = p.y * -1;
	return sym;
}