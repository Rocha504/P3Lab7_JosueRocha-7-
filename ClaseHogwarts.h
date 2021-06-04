#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "MagoSlytherin.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"
#include <vector>
using std::vector;

class ClaseHogwarts
{
	public:
		ClaseHogwarts();
		ClaseHogwarts(vector <MagoSlytherin*> ,vector <MagoHufflepuff*> ,	vector <MagoGryffindor*>,vector <MagoRavenclaw*>);
		~ClaseHogwarts();
		void promedio_habilidades_por_casa();
	protected:
		int year;
		vector <MagoSlytherin*> magos_slytherin;
		vector <MagoHufflepuff*> magos_hufflepuff;
		vector <MagoGryffindor*> magos_gryffindor;
		vector <MagoRavenclaw*> magos_ravenclaw;
		
};

#endif