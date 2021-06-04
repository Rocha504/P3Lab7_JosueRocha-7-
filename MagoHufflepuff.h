#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include <string>
using std::string;

#include "mago.h"

class MagoHufflepuff : public Mago
{
	public:
		MagoHufflepuff();
		~MagoHufflepuff();
	protected:
		int paciencia;
};

#endif