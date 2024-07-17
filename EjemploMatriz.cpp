#include <iostream>
#include <list>
using namespace std;

int main() 
{
    int numeros[5][3];
    int i,j;

        for(i=1;i<=6;i++){
        
            for(j=1;j<=3;j++){
                cout<<"Ingrese el elemento N°"<<j<<" de la fila N°"<<i<<": "<<endl;
                cin>>numeros[i][j];
        }
    }

    for(i=0;i<=5;i++){
        cout<<endl;
        for(j=0;j<3;j++){
            cout<<numeros[i][j]<<" ";
        }
    }
    return 0;

}

