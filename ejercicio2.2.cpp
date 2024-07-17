#include <iostream>
using namespace std;

struct encuestado
{
    int edad;
    char sexo;
    string departamento;
    string estudios;
    string universidad;
    int cantPropiedades;
    int CantTrabajos;
    float sueldos[12];
} encuestados[100];

void MostrarPromedio(encuestado encuestados[], int cantEncuestados, int cantSueldos, int cantEdad)
{
    float sumaSueldos = 0;
    int contadorMujeres = 0;

    for (int i = 0; i < cantEncuestados; i++)
    {
        if (encuestados[i].sexo == 'M' && encuestados[i].edad >= cantEdad)
        {
            for (int j = 0; j < cantSueldos; j++)
            {
                sumaSueldos += encuestados[i].sueldos[j];
            }
            contadorMujeres++;
        }
    }

    if (contadorMujeres > 0)
    {
        float promedio = sumaSueldos / (contadorMujeres * cantSueldos);
        cout << "El promedio de sueldos de mujeres mayores de " << cantEdad << " es: " << promedio << endl;
    }
    else
    {
        cout << "No hay mujeres que cumplan con los criterios especificados." << endl;
    }
}

int main()
{
    int cantEncuestados, cantSueldos, cantEdad;

    do
    {
        cout << "\nIngrese la cantidad de encuestados: ";
        cin >> cantEncuestados;
    } while (cantEncuestados <= 0 || cantEncuestados > 100);

    for (int i = 0; i < cantEncuestados; i++)
    {
        cout << "Para el encuestado N° " << (i + 1) << endl;
        cout << "Edad: ";
        cin >> encuestados[i].edad;

        cout << "Sexo H(hombre) o M(mujer): ";
        cin >> encuestados[i].sexo;

        cout << "Departamento: ";
        cin >> encuestados[i].departamento;

        cout << "Universidad: ";
        cin >> encuestados[i].universidad;

        cout << "Cantidad de propiedades: ";
        cin >> encuestados[i].cantPropiedades;

        cout << "Cantidad de trabajos: ";
        cin >> encuestados[i].CantTrabajos;

        for (int j = 0; j < 12; j++)
        {
            cout << "Ingrese el sueldo Numero " << (j + 1) << ": ";
            cin >> encuestados[i].sueldos[j];
        }
    }

    do
    {
        cout << "\nIngrese la cantidad de sueldos a comparar: ";
        cin >> cantSueldos;
    } while (cantSueldos <= 0);

    do
    {
        cout << "\nIngrese la edad desde que se desea comparar: ";
        cin >> cantEdad;
    } while (cantEdad <= 0 || cantEdad > 100);

    MostrarPromedio(encuestados, cantEncuestados, cantSueldos, cantEdad);

    return 0;
}


