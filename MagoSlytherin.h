#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include "mago.h"
#include <string>
using std::string;

class MagoSlytherin : public Mago
{
	public:
		MagoSlytherin();
		~MagoSlytherin();
		
	protected:
		int liderazgo;
};

#endif