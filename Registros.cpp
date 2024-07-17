
/* 
Tenemos una tabla o reguistro. vamos a tener una estructura de alumno
que contendra el apartado nombre y apellido, legajo, dni y sexo, luego 
otro apartado de notas, donde tendra 4 espacios, luego otro apartado de 
catedra donde tendra el apartado turno y materia 

Consignas

	Mostrar Nombre y Apellido, legajo y sexo de los alumnos con mejor promedio de sus 4 notas y que
pertenezcan al turno mañana.

	Dada una materia ingresada por el usuario, mostrar las alumnas del turno tarde que hayan obtenido
al menos un 10 en sus notas.
*/



#include <iostream>
using namespace std;

int cantAlum;

float calcularPromedio(float notas[4]) {
	float suma = 0;
		for (int k = 0; k < 4; k++) {
			suma = suma+notas[k];
		}
	return suma / 4;
}

struct datosAlum{
	
	string nom;
	string apell;
	string legajo;
	string dni;
	char sexo;
	
};

struct notas{
	
	float nota[4];
	float prom;
};

struct catedra{
	
	char turno;
	string materia;
	
};

struct alumno{
	
	struct datosAlum alum;
	struct notas n;
	struct catedra cat;

}alumno[50];


int main(int argc, char *argv[]) {
	
int i,j,ubicacion;
float promedioTotal;
promedioTotal = 0;


	fflush(stdin); //vaciar el buffer

	do{
		cout<<"Ingrese la cantidad de alumnos: "<<endl; cin>>cantAlum;
	} while(cantAlum <= 0);
	
	for(i=0;i<cantAlum;i++){
		
		fflush(stdin); //vaciar el buffer
	
		cout<<"Ingrese el nombre del alumno N°"<<i+1<<endl; 
		cin>>alumno[i].alum.nom;
			
		cout<<"Ingrese el apellido del alumno N°"<<i+1<<endl; 
		cin>>alumno[i].alum.apell;
			
		cout<<"Ingrese el lejago del alumno N°"<<i+1<<endl; 
		cin>>alumno[i].alum.legajo;
			
		cout<<"Ingrese el DNI del alumno N°"<<i+1<<endl;
		cin>>alumno[i].alum.dni;
			
		cout<<"Ingrese el sexo del alumno N°"<<i+1<<endl;
		cout<<" Hombre: H \n Mujer: M"<<endl;
		cin>>alumno[i].alum.sexo;
		
		cout<<"Ingrese el turno del alumno N°"<<i+1<<endl;
		cout<<" Mañana: M \n Tarde: T"<<endl;
		cin>>alumno[i].cat.turno;
		
		cout<<"Ingrese la materia: "<<endl;
		cin>>alumno[i].cat.materia;
		
			for(j=0;j<4;j++){
				
				cout<<"Ingrese la nota N°"<<j+1<<endl;
				cin>>alumno[i].n.nota[j];
				alumno[i].n.prom = alumno[i].n.prom + alumno[i].n.nota[j];
			}
			
		
	}		
	
	/*
	Mostrar Nombre y Apellido, legajo y sexo de los alumnos con mejor
	promedio de sus 4 notas y que pertenezcan al turno mañana
	*/
	
	//buscamos el nombre y el promedio del mejor alumno
	
		for(i=0;i<cantAlum;i++){
		
		promedioTotal = promedioTotal + alumno[i].n.prom;
	
		}	
	cout<<"Los alumnos con los mejores promedios del turno mañana son: "<<endl;
	
	for(i=0;i<cantAlum;i++){

		if(promedioTotal <= alumno[i].n.prom && alumno[i].cat.turno == 'M'){
			
			cout<<"Nombre: "<<alumno[i].alum.nom<<" "<<alumno[i].alum.apell<<endl;
			cout<<"DNI: "<<alumno[i].alum.dni<<endl;
			cout<<"Legajo: "<<alumno[i].alum.legajo<<endl;
			cout<<"Sexo: "<<alumno[i].alum.sexo<<endl;
			
		}else{
			cout<<"No hay buenos promedios"<<endl;
		}
	}

	//Dada una materia ingresada por el usuario, mostrar las alumnas del turno tarde que hayan obtenido al menos un 10 en sus notas.
	
	
	
	
	return 0;
}

