#include "MagoRavenclaw.h"

MagoRavenclaw::MagoRavenclaw()
{
	this->setAstucia(0+rand()%100);
	this->setInteligencia(80+rand()%100);
	this->setLealtad(0+rand()%100);
	this->setValentia(0+rand()%100);
	this->setCreatividad(80+rand()%100);
}

void MagoRavenclaw :: setCreatividad(int at){
	this->creatividad=at;
}

MagoRavenclaw::~MagoRavenclaw()
{
}