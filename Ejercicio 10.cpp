#include <iostream>
using namespace std;

void mostrarNumeros(int num)
{
	if( num== 0)
	{
		cout<<" 0."; //caso base y fin de la recursion
	}
	else if(num < 0 )
	{
		cout<<num<<", ";
		num += +1;
		mostrarNumeros(num);
	}
	else
	{
		
		num += -1;
		mostrarNumeros(num);
		cout<<num<<", ";
		
	
	}
}

int main(int argc, char *argv[]) {
	
	float numero,ind;
	
	cout<<"Ingrese un numero: ";	cin>>numero;
	
	mostrarNumeros(numero);
	
	return 0;
}

