#include <iostream>
#include "Edificio.cpp"

#ifndef BANCO_CPP
#define BANCO_CPP

class Banco : public Edificio
{
	private:
		
	public:
		Banco() : Edificio(14){}
		int producir()
		{
			setProduccion(getProduccion()+1);
			return getProduccion();
		}
		
};

#endif
