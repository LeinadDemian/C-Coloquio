#include <iostream>
using namespace std;

// Declarar las funciones para la suma de los nuemros pares en el vector

int sumaPares(int vector[20], int tamanho, int ind)
{
	if(ind == tamanho)
	{
		return 0;
	}
	else if( vector[ind] % 2 == 0)// El numero es par
	{
		return vector[ind] + sumaPares(vector, tamanho, ind + 1);
	}
	else
	{
		return sumaPares(vector, tamanho, ind + 1);
	}
}	
int main(int argc, char *argv[]) 
{
	
/*  Declar variables y como se el tamaño del vector puedo definirlo y tambien
	puede declarar las variables tamaño y ind que sera el ind de donde voy a partir el recorido  
*/
//	int vector[];  como quiero que el tamaño del vector sea ingresado por el usuario necesito declarar un vector dinamico 
	int tamanho;
	int ind = 0;
	int i,totalPares;
	
	do
	{
		cout<<"Ingrese el tamañon del vector: "; cin>>tamanho;
	}while(tamanho <= 0);
	
	int *vector = new int[tamanho];
	
	for(i=0;i<tamanho;i++)  //LLenamos el vector con numeros enteros 
	{ 
		do
		{
			cout<<"\nIngrese el numero entero de la posicion "<<i+1<<" del vector: ";
			cin>>vector[i];
		}
		while(vector[i] <= 0);
	}
	
	totalPares = sumaPares(vector,tamanho,ind); 
	
	cout<<"\nLa suma de los nuemros pares del vector es : "<<totalPares<<endl;
	
	return 0;
}

