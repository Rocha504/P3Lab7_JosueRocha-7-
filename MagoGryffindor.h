#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include <string>
using std::string;

#include "mago.h"

class MagoGryffindor : public Mago
{
	public:
		MagoGryffindor();
		~MagoGryffindor();
		string Tostring();
		void setAtrevimiento(int);
		
	protected:
		int atrevimiento;
};

#endif