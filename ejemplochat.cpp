#include <iostream>
using namespace std;

// Declaración de funciones y procedimientos
void contar(int, int, int&, int&, int&, int&, int&);

void contar(int num, int digito, int &nuevonum, int &ultimoDig, int &cantMax, int &cantMin, int &canIgual)
{
    if (nuevonum > 0)
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
        ultimoDig = nuevonum % 10;
        nuevonum = nuevonum / 10;
        contar(num, digito, nuevonum, ultimoDig, cantMax, cantMin, canIgual);
    }
}

int main()
{
    int num, digito, cantMin, cantMax, canIgual, ultimoDig, nuevoNum;
    cantMax = cantMin = canIgual = 0;
    int indicacion;

    do
    {
        cout << "Ingrese un número positivo: " << endl;
        cin >> num;
        nuevoNum = num;

        if (num <= 0)
        {
            cout << "El número ingresado no es valido, por favor ingrese otro número:  " << endl;
        }
        else
        {
            cout << "El número es ingresado exitosamente." << endl;
        }
    } while (num < 0); // mientras el numero sea menor a cero se sigue pidiendo

    cout << "Seleccione alguna de las siguientes opciones." << endl;
    cout << "1-Se desea buscar la cantidad de veces que es menor." << endl;
    cout << "2-Se desea buscar la cantidad de veces que es mayor." << endl;

    cin >> indicacion; // Obtener la opción del usuario después de mostrar el menú

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
