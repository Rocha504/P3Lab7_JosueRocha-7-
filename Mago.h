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
		
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif