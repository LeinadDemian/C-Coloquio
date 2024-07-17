/*  
Dado un número entero positivo; un dígito (0 a 9) y la indicación de MAYOR (o MENOR); obtenga la cantidad de veces
que aparece el dígito en el número y cuántos fueron MAYORES (o MENORES). 
Ejemplo: número: 67302622309, dígito: 3, indicación: MAYOR; resultados: 2 (cantidad de veces) y 4 (cantidad de dígitos mayores a 3).
*/
#include <iostream>
using namespace std;
//Definicion de funciones y procedimientos 

void contar(int ,int ,int&, int&, int&, int&, int&);

void contar(int num,int digito,int &nuevonum,int &ultimoDig, int &cantMax, int &cantMin, int &canIgual)
{
ultimoDig = nuevonum % 10;
    if (nuevonum>0)
    {
        if (ultimoDig == digito)
        {
            canIgual = canIgual + 1;
        }
        else if (ultimoDig > digito)
        {
            cantMax = cantMax + 1;
        }
        else
        {
            cantMin = cantMin + 1;
        }
        nuevonum = nuevonum / 10;
        contar(num,digito,nuevonum,ultimoDig,cantMax,cantMin,canIgual);
    }
    else
    {
        cout<<"Prceso terminado"<<endl;
        //Mostramos los resultados
        cout<<"El número selecionado fue: "<<num<<"\n El digito se repitio "<<canIgual<<" de veces."<<endl;
        cout<<"La cantidad de digitos mayores es de "<<cantMax<<endl;
    }
    
    
}
//Declaramos la funcion principal
int main()
{
    int num, digito, cantMin, cantMax,canIgual,ultimoDig,nuevoNum;
    cantMax = cantMin = canIgual = 0;
    int indicacion;

    do
    {
        cout << "Ingrese un número positivo: " << endl; cin >> num;
        nuevoNum = num;

        if(num<=0)
        {
            cout<<"El número ingresado no es valido, porfavor ingrese otro número:  "<<endl;

        }
        else
        {
             cout<<"El número es ingresado exitosamente."<<endl;
        }
    } while (num < 0); // miestras el numero se menor a cero se sigue pidiendo

    do
    {
        cout << "Ingrese un digito de 0 al 9: " << endl; cin >> digito;
        
    } while (digito < 0 && digito > 9); // miestras el numero se menor a cero se sigue pidiendo


    cout<<"Seleccione alguno de las siguientes opciones."<<endl; 
    cout<<"1-Se desea buscar la cantidad de veces que es menor."<<endl;
    cout<<"2-Se desea buscar la cantidad de veces que es mayor."<<endl;
    cin>>indicacion;

    switch (indicacion)
    {
        case 1:
        contar(num, digito, nuevoNum, ultimoDig, cantMax, cantMin, canIgual);
        cout << "Cantidad de veces que aparece el dígito " << digito << ": " << canIgual << endl;
        cout << "Cantidad de dígitos menores es de " << cantMin << endl;
        break;
    case 2:
        contar(num, digito, nuevoNum, ultimoDig, cantMax, cantMin, canIgual);
        cout << "Cantidad de veces que aparece el dígito " << digito << ": " << canIgual << endl;
        cout << "Cantidad de dígitos mayores es de " << cantMax << endl;
        break;
    default:
        cout << "No ha elegido una opción disponible" << endl;
        break;
    }
    return 0;
}

