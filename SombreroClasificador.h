#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "ClaseHogwarts.h"
#include <vector>
using std::vector;

class SombreroClasificador
{
	public:
		SombreroClasificador();
		~SombreroClasificador();
		ClaseHogwarts* clasificar_magos_nuevos(vector<Mago*>,int);
	protected:
};

#endif