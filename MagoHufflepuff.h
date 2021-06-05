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
		void setPaciencia(int);
	protected:
		int paciencia;
};

#endif