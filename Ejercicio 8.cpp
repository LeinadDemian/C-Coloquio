#include <iostream>
using namespace std;


void calcularCantFrascos(float &peso, int &frasco500, int &frasco100, int &frasco50)
{
	
	if(peso < 50)
	{
		
		cout<<"Fin cuenta: "<<endl;
		cout<<" "<<frasco500<<" frascos de 500 gramos."<<endl;
		cout<<" "<<frasco100<<" frascos de 100 gramos."<<endl;
		cout<<" "<<frasco50<<" frascos de 50 gramos."<<endl;
		
		if(peso != 0)
		{
			cout<<"Con los "<<peso<<" gramos restantes es un frasco que solo tendra "<<peso<<".";
		}
		
	}
	else if(peso-500 >= 0)
	{
		frasco500 += +1;
		peso += -500;
		calcularCantFrascos(peso,frasco500,frasco100,frasco50);
	}
	else if(peso-100 >= 0)
	{
		frasco100 += +1;
		peso += -100; 
		calcularCantFrascos(peso,frasco500,frasco100,frasco50);
	}
	else if(peso-50 >= 0)
	{
		frasco50 += +1;
		peso += -50;
		calcularCantFrascos(peso,frasco500,frasco100,frasco50);
	}
	
	
	
}


int main(int argc, char *argv[]) {
	
	
	int frasco500 = 0;
	int	frasco100 = 0;
	int	frasco50 = 0;
	
	
	float peso;
	
	cout<<"Ingrese el peso en gramos: "; cin>>peso;
	
	calcularCantFrascos(peso,frasco500,frasco100,frasco50);
	
	return 0;
}

