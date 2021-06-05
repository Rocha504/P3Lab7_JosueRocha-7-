#include "MagoGryffindor.h"

MagoGryffindor::MagoGryffindor()
{
	this->setAstucia(0+rand()%100);
	this->setInteligencia(0+rand()%100);
	this->setLealtad(0+rand()%100);
	this->setValentia(80+rand()%100);
	this->setAtrevimiento(80+rand()%100);
	
}

string MagoGryffindor:: Tostring(){
	return "Mago Griffindor";
}

void MagoGryffindor:: setAtrevimiento(int at){
	this->atrevimiento=at;
}

MagoGryffindor::~MagoGryffindor()
{
}