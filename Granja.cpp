#include <iostream>
#include "Edificio.cpp"

#ifndef GRANJA_CPP
#define GRANJA_CPP

class Granja :  public Edificio
{
	private:
		int nPro;
	public:
		Granja() : Edificio(5)
		{
			nPro=0;
		}
		int producir()
		{
			nPro++;
			if(nPro<10)
				return getProduccion();
			else
				{nPro=0; return 20+getProduccion();}
		}
};

#endif

