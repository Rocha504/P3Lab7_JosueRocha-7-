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
		void setLiderazgo(int);
	protected:
		int liderazgo;
};

#endif