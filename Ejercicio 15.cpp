#include <iostream>
#include <conio.h>
using namespace std;

struct datos
{
    string nombreYapell;
    string telefono;

};

struct obrero
{
    datos info;
    char oficio;    // SOLDADOR-HERRERO-PINTOR-OPERARIO GENERAL
    int añoIngreso;
    int cantAccidentes;
    int hsTrabajadas[12];
}obrero[100];



void cargarDatos(int num)
{

    int i,j;
    int empleo;
    
    fflush(stdin); //vaciar el buffer

    for(i=0;i<num;i++)
    {
        do
        {
            cout<<"\nIngrese el nombre y apellido del empeado N°"<<i+1<<" "; cin>>obrero[i].info.nombreYapell;

        }while(obrero[i].info.nombreYapell == "");

         do
        {
            cout<<"\nIngrese el nombre y apellido del empeado N°"<<i+1<<" "; cin>>obrero[i].info.telefono;

        }while(obrero[i].info.telefono == "");
        
        
        while (true)
        {
            cout<<"Ingrese la profecion del del obrero N°"<<i+1<<" "<<endl;
            cout<<"Elija una opcion."<<endl;
            cout<<"1-SOLDADOR"<<endl;
            cout<<"2-HERRERO"<<endl;
            cout<<"3-PINTOR"<<endl;
            cout<<"4-OPERARIO GENERAL"<<endl;

            cin>>empleo;

            switch (empleo)
            {
            case 1:
                
                obrero[i].oficio = 'S';
                break;

            case 2:
                
                obrero[i].oficio = 'H';
                break;

            case 3:
                
                obrero[i].oficio = 'P';
                break;

            case 4:
                
                obrero[i].oficio = 'O';
                break;
            
            default:

                cout<<"\nEl numero ingresado no es valido. "<<endl;
                break;
            }
            
            break;
            
        }
           
        do
        {
        cout<<"\nIngrese el año de ingreso del empleado N°"<<i+1<<" "; cin>>obrero[i].añoIngreso;

        }while(obrero[i].añoIngreso < 2000);

        do
        {
            cout<<"\nIngrese la cantidad de accidentes del empeado N°"<<i+1<<" "; cin>>obrero[i].cantAccidentes;

        }while(obrero[i].cantAccidentes < 0);
            
        for(j=0;j<12;j++)
        {
            do
            {
                cout<<"\nIngrese la cantidad de horas trabajadas del empleado N°"<<i+1<<" del mes "<<j+1<<" ";
                cin>>obrero[i].hsTrabajadas[j];
            } while (obrero[i].hsTrabajadas[j] < 0);

        }
        

    }

}

void mostrarObreroSeguros(int num, int &ind)
{
    int i,j;

    cout<<"\nLos obreros que deben recibir seguros son: "<<endl;

    for(i=0;i<num;i++)
    {
        if(obrero[i].cantAccidentes > 0)
        {
            cout<<ind+1<<"-Nombre: "<<obrero[i].info.nombreYapell<<endl;
            cout<<"   Telefono: "<<obrero[i].info.telefono<<endl;
            ind += +1;
        } 
    }
}

int main()
{

    int num;
    int ind = 0;

    fflush(stdin); //vaciar el buffer2

    cout<<"Ingrese la cantidad de empleados:"; cin>>num;

    cargarDatos(num);

    mostrarObreroSeguros(num,ind);

    return 0;

}