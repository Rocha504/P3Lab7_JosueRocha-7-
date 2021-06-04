#include "SombreroClasificador.h"
#include <typeinfo>
#include <vector>
using std::vector;
#include "MagoSlytherin.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"

SombreroClasificador::SombreroClasificador()
{
}

ClaseHogwarts* SombreroClasificador:: clasificar_magos_nuevos(vector<Mago*> magos,int year){
	
	vector <MagoSlytherin*> magos_slytherin;
	vector <MagoHufflepuff*> magos_hufflepuff;
	vector <MagoGryffindor*> magos_gryffindor;
	vector <MagoRavenclaw*> magos_ravenclaw;
 
	
	for(int i=0;i<magos.size();i++){
		if(typeid(*magos[i])==typeid(MagoSlytherin)){
			magos_slytherin.push_back(dynamic_cast<MagoSlytherin*>(magos[i]));
		}
		else
			if(typeid(*magos[i])==typeid(MagoHufflepuff)){
				magos_hufflepuff.push_back(dynamic_cast<MagoHufflepuff*>(magos[i]));
			}
		else
			if(typeid(*magos[i])==typeid(MagoRavenclaw)){
				magos_ravenclaw.push_back(dynamic_cast<MagoRavenclaw*>(magos[i]));
			}
		else
			if(typeid(*magos[i])==typeid(MagoGryffindor)){
				magos_gryffindor.push_back(dynamic_cast<MagoGryffindor*>(magos[i]));
		}
	}
	ClaseHogwarts* Clase=new ClaseHogwarts(magos_slytherin,magos_hufflepuff,magos_gryffindor,magos_ravenclaw);
	
	return Clase;
	
}

SombreroClasificador::~SombreroClasificador()
{
}