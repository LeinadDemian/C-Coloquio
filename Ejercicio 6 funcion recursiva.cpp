#include <iostream>
using namespace std;

int sumaPares(int com,int term)
{
	
	int sumatotal;
	
	cout<<""<<term<<"+";
	
	if(term < com) //
	{
		cout<<"0";
		return 0;
	}
	else if(term%2 == 0 ) //si el numero es par
	{
		return term + sumaPares(com,term-2);
		 
	}
	else
	{
		return sumaPares(com,term-1);
	}
	
	cout<<""<<term<<"+";
	
	return sumatotal;
	
}

int main(int argc, char *argv[]) {
	
	int n1,n2,sumatotal;
	
	do
	{
		cout<<"Ingrese el de numero de incio y final separado por espacios: "; 
		cin>>n1>>n2;
		
		
	}while( n1>n2 || n1 == n2);
	
	sumatotal = sumaPares(n1,n2);
	
	cout<<"\nLa suma de los numeros impares comprendidos en el rango "<<n1<<" y "<<n2<<" es "<<sumatotal;
	
	return 0;
}

