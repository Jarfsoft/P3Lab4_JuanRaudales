#include <iostream>

#ifndef EDIFICIO_CPP
#define EDIFICIO_CPP

class Edificio
{
	private:
		int produccion;
		
	public:
		Edificio(int pro)
		{
			produccion=pro;
		}
		virtual int producir(){}
		int getProduccion()
		{
			return produccion;	
		}
		void setProduccion(int pro)
		{
			produccion=pro;
		}
		
};

#endif
