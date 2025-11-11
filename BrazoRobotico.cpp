#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
	agarrando = false;
}

double BrazoRobotico::getX() const{
	return x;
}

double BrazoRobotico::getY() const{
	return y;
}

double BrazoRobotico::getZ() const{
	return z;
}

bool BrazoRobotico::getAgarrando() const{
	return agarrando;
}

void BrazoRobotico::mover(double xm, double ym, double zm){
	x = xm;
	y = ym;
	z = zm;
}

void BrazoRobotico::coger(){
	if(agarrando == false)
	{
		agarrando = true;
		std::cout << "Pinza cerrada.\n";
	}
	else
	{
		std::cout << "La pinza ya está cerrada.\n";
	}
}

void BrazoRobotico::soltar(){
	if(agarrando == true)
	{
		agarrando = false;
		std::cout << "Pinza abierta.\n";
	}
	else
	{
		std::cout << "La pinza ya está abierta.\n";
	}
}
