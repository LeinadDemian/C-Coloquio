#include<iostream>
using namespace std;

void AsignarNuervoValor(int&,int&,int&);

int main(){
    int num1,num2,num3;

    cout<<"Ingrese 3 numeros: "; cin>>num1>>num2>>num3;

    AsignarNuervoValor(num1,num2,num3);
    
    return 0;
}
 
void AsignarNuervoValor(int& n1,int& n2,int& n3){
int max;
    if(n3>n2){
        max = n3;
    }   
    else if(n2>n1){
        max = n2;
    }
    else
        max = n1;

cout<<"El mayor numero de los 3 es: "<<max;

}