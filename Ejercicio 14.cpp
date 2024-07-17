#include<iostream>
using namespace std;

void cargarVector(int vector[],int tam,int &ind)
{
	if(ind == tam)
	{
		cout<<"\nFin del proceso cargar datos"<<endl;
		
	}
	else if(ind <= tam)
	{
		cout<<"\nIngrear el dato N°" <<ind+1<<" del vector: ";
		cin>>vector[ind];
		ind += +1;
		cargarVector(vector,tam,ind);
	}
	ind = 0;
}

void mostrar(int vector[],int tam,int &ind)
{
	if(ind < tam)
	{
		cout<<"\nDato N°" <<ind+1<<"del vector: "<<vector[ind];
		ind += +1;
		mostrar(vector,tam,ind);
	}
	else 
	{
		cout<<"\nFin del proceso mostrar datos"<<endl;
	}
	ind = 0;
}

int main()
{
	int tam,opc;
	int ind = 0;
	
	do
	{
		cout<<"Ingresar el tamaño del vector."; cin>>tam;
	}while (tam <= 0);
	
	int *vector = new int[tam];
	
	while (true) 
	{
		cout << "1-Cargar arreglo." << endl;
		cout << "2-Mostrar arreglo." << endl;
		cout << "3-Salir del programa." << endl;
		cout << "Elija una opción: ";
		cin >> opc;
		
		switch (opc) 
		{
		case 1:
			cargarVector(vector, tam, ind);
			break;
			
		case 2:
			mostrar(vector, tam, ind);
			break;
			
		case 3:
			cout << "Fin programa." << endl;
			return 0;
			
		default:
			cout << "Opción no válida. Por favor, elija una opción válida." << endl;
		}
	}
	
	return 0;
}
