#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin()
{
	this->setAstucia(80+rand()%100);
	this->setInteligencia(0+rand()%100);
	this->setLealtad(0+rand()%100);
	this->setValentia(0+rand()%100);
	this->setLiderazgo(80+rand()%100);
}

void MagoSlytherin:: setLiderazgo(int lid){
	this->liderazgo=lid;
}

MagoSlytherin::~MagoSlytherin()
{
}