#include<iostream>

using namespace std;

//declaramos la funcion
int EncontrarMax(int num1, int nume2);



main(){
    int numero1,nuemero2,max;

    cout<<"Ingrese dos nuemros entero: "<<endl; cin>>numero1>>nuemero2;

    max = EncontrarMax(numero1,nuemero2);

    cout<<"El numero mayor es: "<<max<<endl;

    return 0;
}

int EncontrarMax(int num1, int nume2){
    int numeroMayor;

    if(num1>nume2){
        numeroMayor = num1;
    }
    else{
        numeroMayor = nume2;
    } 
    return numeroMayor;
}