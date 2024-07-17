#include <iostream>
using namespace std; 
// Subprograma recursivo
void mostrarNumeros(int numero, int n) {
	
	if(n == numero)
	{
		cout<<numero<<".";
	}
	else if(numero%2 == 0)
	{
		cout<<n<<", ";
		mostrarNumeros(numero,n+2);
	}else
	{
		cout<<n<<", ";
		mostrarNumeros(numero,n+1);
	}
	
	
}

int main() {
	int numero;
	int n = 0;
	cout << "Ingrese un número entero positivo: ";
	cin >> numero;
	
	if (numero < 0) {
		cout << "El número ingresado no es positivo." <<endl;
	} else {
		cout << "El número es " << numero << ": ";
		mostrarNumeros(numero,n);
	}
	
	return 0;
}
