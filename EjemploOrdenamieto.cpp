#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[] = {2,23,9,8,3};
    int i,j,aux,min;
    
    //hacemos un variar "for" para realizar un bucle con el fin de hacer el metodo por seleccion o sort
    for(i=0;i<5;i++){
        min=i;
        
        for(j=i+1;j<5;j++){ //se comienza desde el uno ya que es el siguiete en la lista porque el anterior ya esta ordenado
            if(numeros[j] < numeros[i]){
                min=j;
            }
        }

        aux = numeros[i]; 
        numeros[i] = numeros[min]; 
        numeros[min] = aux; 
    }

    cout<<"Orden descendiente"<<" ";
    for (i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden ascendiente"<<" ";
    for (i=4;i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    getch();
    return 0;
}
 