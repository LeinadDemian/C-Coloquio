#include <iostream>
using namespace std;


//Declaramos el subprograma

int mostrarNumeros(int num)
{
	
	if(num == 0 || num == 1) //condicion base
	{
		cout<<num<<".";
	}
	else if(num > 0)
	{
		if(num%2 != 0) //    7: 7, 5, 3, 1
		{
			cout<<num<<", ";
			mostrarNumeros(num-2);
		}
		else if(num%2 == 0)    // 8: 7 5 3 1
		{
			mostrarNumeros(num-1);
		}
		
	}	
	else
	{
		if(num%2 == 0)   // -6: -6,-4,-2,0
		{
			cout<<num<<", ";
			mostrarNumeros(num+2);	
		}
		else
		{
			mostrarNumeros(num+1);
				
		}
	}
	return 0;
}

int main(int argc, char *argv[]) 
{
	
	int num;
	int ind = 0;
	
	cout<<"Ingrese en numero entero: "; cin>>num;
	
	cout<<"El numero es "<<num<<": ";
	
	mostrarNumeros(num);
	
	return 0;
}

