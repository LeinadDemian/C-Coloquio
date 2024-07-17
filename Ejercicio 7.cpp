#include <iostream>
using namespace std;

void cargarMatriz(int matriz[][3],int M,int N)
{
	int i,j;
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			do
			{
			
				cout<<"Ingrese el dato de la casilla "<<i+1<<"-"<<j+1<<" : ";  cin>>matriz[i][j];
			}while(matriz[i][j] <= 0);
		}
	}
}


void CantPares_Impares(int matriz[][3], int M, int N)
{
	int i,j;
	int cantImpares = 0;
	int cantPares = 0;
	

	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i == j)
			{
				if(matriz[i][j] % 2 == 0)
				{
					cantPares = cantPares +1;
				}
				else
				{
					cantImpares = cantImpares +1;
				}
			}
			
		}
	}
	
	cout<<"\nLa cantidad de numeros pares de la diagonal es "<<cantPares<<" y de imapres "<<cantImpares<<".";
	
}
  
int main(int argc, char *argv[]) {
	
	int M = 4;
	int N = 3;
	int matriz[4][3]; //M((cantidad de filas) y N(Cantidd de columnas))

	
	//llamamos al para cargar la matriz.
	
	cargarMatriz(matriz,M,N);
	
	//Llmamos al subprograma para contar los N.pares e impares de la diagonal principal.
	
	CantPares_Impares(matriz,M,N);
	
	return 0;
}

