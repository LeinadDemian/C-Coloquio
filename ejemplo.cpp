#include <iostream>
#include <list>
using namespace std;

int main() 
{
float numero,dividendo, residuo, resultado;

    cout<<"Ingrese un numero: "<<endl; cin>>numero;
    cout<<"Ingrese el dividendo: "<<endl; cin>>dividendo;

    resultado = numero / dividendo;
    //residuo = numero % dividendo; //

    cout<<"El resultado de "<<numero<<"/"<<dividendo<<"es de :"<<resultado<<endl;
    //cout<<"El resto de "<<numero<<"/"<<dividendo<<"es de :"<<residuo<<endl;

    if (12+12==24)
    {
        cout<<"El 12+12=24 es verdadera"<<endl;
    }
    else
    {
        cout<<"El 12+12=24 es falsa"<<endl;
    }

    if (12.00+12.00==24)
    {
        cout<<"El 12.00+12.00=24 es verdadera"<<endl;
    }
    else
    {
        cout<<"El 12.00+12.00=24 es falsa"<<endl;
    }


    return 0;

}
