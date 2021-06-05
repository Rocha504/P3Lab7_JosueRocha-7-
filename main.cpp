#include <iostream>
using std::endl;
using std::cout;
using std::cin;
#include "Mago.h"
#include "MagoSlytherin.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"
#include "ClaseHogwarts.h"
#include "SombreroClasificador.h"
#include <vector>
using std::vector;
#include <stdlib.h>     
#include <time.h>

vector <Mago*> generar();

int main(int argc, char** argv) {
	
	SombreroClasificador* sombrerito=new SombreroClasificador();
	vector<Mago*> lista=generar();
	int year;
	cout<<"Ingrese el año en el que se creo la clase"<<endl;
	cin>>year;
	ClaseHogwarts* clase=sombrerito->clasificar_magos_nuevos(lista,year);
	
	
	
	return 0;
}

vector <Mago*> generar(){
	
	vector <Mago*> magos;
    srand( (unsigned)time( NULL ) );
	
    for (int i = 0; i < 20; i++) 
    {
        float asignacion=(float) rand()/RAND_MAX;
        if(asignacion<0.25){
        	MagoSlytherin* ms = new MagoSlytherin();
        	magos.push_back(ms);
		}
		else
			if(asignacion>0.25 && asignacion<0.5){
				MagoRavenclaw* mr = new MagoRavenclaw();
				magos.push_back(mr);
			}
		else
			if(asignacion>0.5 && asignacion<0.75){
				MagoHufflepuff* mh = new MagoHufflepuff();
				magos.push_back(mh);
			}
		else
			if(asignacion>0.75){
				MagoGryffindor* mg = new MagoGryffindor();
				magos.push_back(mg);
			}
    }
    return magos;
 
	 
}