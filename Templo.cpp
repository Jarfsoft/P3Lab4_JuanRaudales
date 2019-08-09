#include <iostream>
#include "Edificio.cpp"

#ifndef TEMPLO_CPP
#define TEMPLO_CPP

class Templo : public Edificio
{
	private:
		
	public:
		Templo() : Edificio(27){}
		int producir()
		{
			setProduccion(getProduccion()+3);
			return getProduccion();
		}
			
		
};

#endif
