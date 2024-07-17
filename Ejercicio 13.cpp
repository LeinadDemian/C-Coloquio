#include <iostream>
using namespace std;

bool esCapicua(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10; //digito tiene el ultimo caracter del numero
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}

int main() {

    int numero;

    cout << "Números capicúas en el rango de 10 a 1000:" << endl;
    for  (numero = 10; numero <= 1000; numero++) {
        if (esCapicua(numero)) {
            cout << numero << " ";
        }
    }
    cout << endl;

    return 0;
}
