#ifndef MAGO_H
#define MAGO_H
#include <string>
using std::string;

class Mago
{
	public:
		Mago();
		~Mago();
		virtual string Tostring();
		void setAstucia(int);
		void setLealtad(int);
		void setInteligencia(int);
		void setValentia(int);
		
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif