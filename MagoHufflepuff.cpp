#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff()
{
	this->setAstucia(0+rand()%100);
	this->setInteligencia(0+rand()%100);
	this->setLealtad(80+rand()%100);
	this->setValentia(0+rand()%100);
	this->paciencia=80;
}
MagoHufflepuff::~MagoHufflepuff()
{
}