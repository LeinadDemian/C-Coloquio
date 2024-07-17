#include <iostream>
using namespace std;

void mostrarLetraRecursiva(int numero, char letra, int contador = 1) {
    if (numero == 0) {
        cout << letra;
    } else if (numero < 0) {
        mostrarLetraRecursiva(-numero, letra, contador);
    } else if (contador <= numero) {
        for (int i = 0; i < contador; i++) {
            cout << letra;
        }
        cout << endl;
        mostrarLetraRecursiva(numero, letra, contador + 1);
    }
}

int main() {
    int numero;
    char letra;

    cout << "Ingrese un número: ";
    cin >> numero;

    cout << "Ingrese una letra: ";
    cin >> letra;

    mostrarLetraRecursiva(numero, letra);

    return 0;
}
