#include "Edificio.cpp"

#ifndef REPOSTERIA_CPP
#define REPOSTERIA_CPP

using namespace std;

class Reposteria : public Edificio
{
	private:
	public:
		Reposteria() : Edificio(1) {}
		int producir()
		{
			return getProduccion();
		}
};

#endif
