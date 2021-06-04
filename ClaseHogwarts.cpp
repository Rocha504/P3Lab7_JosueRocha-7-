#include "ClaseHogwarts.h"
#include "MagoSlytherin.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"
#include <vector>
using std::vector;

ClaseHogwarts::ClaseHogwarts()
{
}
ClaseHogwarts::ClaseHogwarts(vector <MagoSlytherin*> ms,vector <MagoHufflepuff*> mh ,	vector <MagoGryffindor*> mg ,vector <MagoRavenclaw*> mr){
	this->magos_slytherin=ms;
	this->magos_gryffindor=mg;
	this->magos_hufflepuff=mh;
	this->magos_ravenclaw=mr;
	this->year=2002;
}
void ClaseHogwarts :: promedio_habilidades_por_casa(){
	
}

ClaseHogwarts::~ClaseHogwarts()
{
}