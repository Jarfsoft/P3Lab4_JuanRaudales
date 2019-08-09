#include "Reposteria.cpp"
#include "Granja.cpp"
#include "Banco.cpp"
#include "Templo.cpp"
#include <vector>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	vector<Edificio*> edificios;
	string nombre, mejora;
	int granjas=0;
	int bancos=0;
	int templos=0;
	mejora="regular";
	unsigned int galletas=0;
	int opcion=0;
	cout<<"********Cookie Cicker********\n\nIntroduzca su nombre: ";	
	cin>>nombre;
	Reposteria *repos= new Reposteria();
	
	edificios.push_back((Edificio*)repos);
	
	while(opcion!=8)
	{
		cout<<"\n\n********Cookie Cicker********\nFabrica de "<<nombre<<"\tGalletas: "<<galletas<<"\n\n1. Hacer click\n2. Comprar granja \n3. Comprar banco\n4. Comprar templo\n5. Comprar oreo \n6. Comprar migajas\n7. Mostrar edificion y mejoras comprados\n8. Salir\n\nSeleccion: ";
		
		cin>>opcion;
		if(opcion==1)
		{
			while(true)
			{
				system("CLS");
				cout<<"Galletas: "<<galletas<<"\nPresionar cualquier tecla hacer galletas, precionar \"C\" para salir.";
				if(getch()=='c')
					break;
				else
				{
					int gall=0;
					for(int x=1;x<edificios.size();x++)
					{
						gall+=edificios.at(x)->producir();
					}
					if(gall==0)
						gall++;
					gall=gall*edificios.at(0)->getProduccion();
					galletas+=gall;
				}
					
			}
			
		}
		if(opcion==2)
		{
			while(true)
			{
				system("CLS");
				cout<<"Granjas: "<<granjas<<"\tGalletas: "<<galletas<<"\nPresionar cualquier tecla para comprar (precio: "<<granjas*15+50<<"), precionar \"C\" para cancelar.";
				if(getch()=='c')
					break;
				else
				{
					if(galletas>=(granjas*15+50))
					{
						Granja *gran= new Granja();
						edificios.push_back((Edificio*)gran);
						galletas-=(granjas*15+50);
						granjas++;
					}
				}
			}
		}
		if(opcion==3)
		{
			while(true)
			{
				system("CLS");
				cout<<"Bancos: "<<bancos<<"\tGalletas: "<<galletas<<"\nPresionar cualquier tecla para comprar (precio: "<<bancos*40+100<<"), precionar \"C\" para cancelar.";
				if(getch()=='c')
					break;
				else
				{
					if(galletas>=(bancos*40+100))
					{
						Banco *ban= new Banco();
						edificios.push_back((Edificio*)ban);
						galletas-=(bancos*40+100);
						bancos++;
					}
				}
			}
		}
		if(opcion==4)
		{
			while(true)
			{
				system("CLS");
				cout<<"Tamplos: "<<templos<<"\tGalletas: "<<galletas<<"\nPresionar cualquier tecla para comprar (precio: "<<templos*100+200<<"), precionar \"C\" para cancelar.";
				if(getch()=='c')
					break;
				else
				{
					if(galletas>=(templos*100+200))
					{
						Templo *tem= new Templo();
						edificios.push_back((Edificio*)tem);
						galletas-=(templos*100+200);
						templos++;
					}
				}
			}
		}
		if(opcion==5)
		{
			if(mejora=="regular")
			{
				while(true)
				{
					system("CLS");
					cout<<"Galletas: "<<galletas<<"\nPresionar cualquier tecla para comprar (precio: 100), precionar \"C\" para cancelar.";
					if(getch()=='c')
						break;
					else
					{
						if(galletas>=100)
						{
							edificios.at(0)->setProduccion(2);
							mejora="Oreo";
							cout<<"\n\nMejora realizada.";
							galletas-=100;
							Sleep(3000);
							break;
						}
					}
				}
			}else
			{
				cout<<"\n\nNo es necesaria la mejora.";
;			}
		}
		if(opcion==6)
		{
			if(mejora=="Oreo")
			{
				while(true)
				{
					system("CLS");
					cout<<"Galletas: "<<galletas<<"\nPresionar cualquier tecla para comprar (precio: 1000), precionar \"C\" para cancelar.";
					if(getch()=='c')
						break;
					else
					{
						if(galletas>=1000)
						{
							edificios.at(0)->setProduccion(3);
							mejora="Migajas";
							cout<<"\n\nMejora realizada.";
							galletas-=1000;
							Sleep(3000);
							break;
						}
					}
				}
			}else if(mejora=="regular")
			{
				cout<<"\n\nEs necesario la mejora Oreo para adquirir esta.";
			}else
			{
				cout<<"\n\nNo es necesaria la mejora.";
			}
		}
		if(opcion==7)
		{
			cout<<"\n\nLa fabrica de galletas de "<<nombre<<", "<<mejora<<", tiene los siguientes edificios:\n\n";
			cout<<"Granjas: "<<granjas<<"\tBancos: "<<bancos<<"\tTemplos: "<<templos<<endl;
		}
	}
	
	
	return 0;
}
