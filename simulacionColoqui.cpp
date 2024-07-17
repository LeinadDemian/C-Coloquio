#include <iostream>
using namespace std;
void leepositivo(int &valor);
void leeEntero(int *valor, int min,int max);
void cargarmatriz(int min,int max,int m[4][4]);
int menor(int fila,int col,int m[4][4]);
int main(int argc, char *argv[]) {
	int mat[4][4];
	int min,max,fila,col,clave,men;
	do{
	leepositivo(min);
	leepositivo(max);
	}while(min==max);//controlo que sean distintos
	cargarmatriz(min,max,mat);
	
	cout<<"Ingrese una fila"<<endl;
	leeEntero(&fila,0,3);
	cout<<"Ingrese una columna"<<endl;
	leeEntero(&col,0,3);
	cout<<"Ingrese un valor a buscar como menor en fila,col"<<endl;
	cin>>clave;
	men=menor(fila,col,mat);
	if(clave==men)
		cout<<"Coincide con menor";
	else
		cout<<"no coincide con menor";
	return 0;
}
void leepositivo(int &valor){
	cout<<"Ingrese un entero positivo";
	do{
	cin>>valor;
	}while(valor<=0);//controla si es positivo
}
	void leeEntero(int *valor, int min,int max){
		cout<<"ingrese un valor entre "<<min<<" y "<<max<<endl;
		do{
			cin>>*valor;
			if(*valor>=min and *valor<=max) break;
				cout<<"Error fuera de rango...";
		} while(1);
	}
	void cargarmatriz(int min,int max,int m[4][4]){
		for(int i=0;i<4;i++)
			for (int j=0;j<4;j++)
				leeEntero(&m[i][j],min,max);
	}
int menor(int fila,int col,int m[4][4]){
	int men=m[fila][0],i,j;
	for(int j=1;j<4;j++)
		if(m[fila][j]<men)
		    men=m[fila][j];
			
	for(int i=0;i<4;i++)
				if(m[i][col]<men)
				  men=m[i][col];
			
		return men;	
}