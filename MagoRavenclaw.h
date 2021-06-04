#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include <string>
using std::string;

#include "mago.h"

class MagoRavenclaw : public Mago
{
	public:
		MagoRavenclaw();
		~MagoRavenclaw();
	protected:
		int creatividad;
};

#endif