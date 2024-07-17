#include<iostream>
using namespace std;

int main()
{
	
	int x,y,i,j,a,b;
	int intentos = 0;
	int tablero[4][4];
	int cableNumero;
	int cable;
	
	
	cout<<"Turno del primer jugador."<<endl;
	cout<<"Ingrese las coordenadas de donde quiere poner la bomba."<<endl;
	cout<<"Ingrese coordenada x"<<endl; cin>>x;
	cout<<"Ingrese coordenada Y"<<endl; cin>>y;
	
	for(i=0;i<3;i++)   //limpiamos el tablero
	{
		for(j=0;j<3;j++)
		{
			tablero[i][j] = 0;
		}
	}
	
	tablero[x][y] = 1; //posicion de la bomba
	
	//colores si elige la fila 1 el color sera rojo, para la fila 2 sera verde y para la fila 3 sera azul
	
	switch (x)
	{
	case 1:
		
		cable = 1; //rojo
		
		break;
	case 2:
		
		cable = 2; //verde
		
		break;
		
	case 3:
		
		cable = 3; //azul
		
		break;
		
	default:
		break;
	}  
	
	cout<<"Turno del segundo jugador."<<endl;
	
	//cout<<"valor de x:"<<x<<"valor de y"<<y;
	
	do
	{
		
		cout<<"¿Donde esta la bomba?"<<endl;
		cout<<"ingrese las coordenadas: ";
		cout<<"Ingrese coordenada x"<<endl; cin>>a;
		cout<<"Ingrese coordenada Y"<<endl; cin>>b;   //donde a es la x y b es la y 
		  
		intentos += +1;
		
		if(intentos == 4)
		{
			cout<<"Jugador 2 pierde bomba explota";
			break;
		}
		
	} while ( a!=x || b!=y );
	
	if(intentos == 4)
	{
		
		
	}
	else
	{
		cout<<"Eliga un color de cable."<<endl;
		cout<<"1-Rojo."<<endl;
		cout<<"2-Verde."<<endl;
		cout<<"3-Azul."<<endl;
		cin>>cableNumero;
		
		if(cable == cableNumero)
		{
			cout<<"Felicidades el jugador 2 gana.Bomba desactivada.";
			
		}
		else
		{
			cout<<"Felicidades el jugador 1 gana.Bomba explotada.";
		}
	}
	
	return 0;
	
}
