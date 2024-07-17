#include <iostream>
using namespace std;

void mostrarDiaszombis(int M,int n,int dia)
{
	
	if(dia > M)
	{
		cout<<"\n Fin del anlaisis."<<endl;
	}else if(dia == 1)
	{
		cout<<"   Dia N° "<<1<<":"<<1<<" zombis."<<endl;
		mostrarDiaszombis(M,n+5,dia+1);
	}
	else
	{
		cout<<"   Dia N° "<<dia<<":"<<n<<" zombis."<<endl;
	
		mostrarDiaszombis(M,n+4,dia+1);
	}
}

int main(int argc, char *argv[]) {
	
	int habitantes = 101;
	int M;
	int dia = 1, n = 0;

	do{
		cout<<" Ingrese hasta que dia se quiere visualizar el incremento de zombis: "; cin>>M;
		cout<<endl;
	}while(M <= 0);
	
	//llamamso al subprocedimiento para mostrar como se fue aumentando la cantidad de zombis con el transcurso de los dias
	
	mostrarDiaszombis(M,n,dia);
	
	return 0;
}

/* 

	dia 1 = 1
	dia 2 = 5
	dia 3 = 9
	dia 4 = 13
 
	El patron es que cada dia empezando desde el dia 1 se suma 4 zombis al dia siguiente

*/
