#include <iostream>
using namespace std;

// Subprograma para cargar la matriz
void cargarDatos(int matriz[][3], int filas, int columnas) {
	int i, j;
	
	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {
			cout << "Ingrese el valor del número de la fila " << i + 1 << " y de la columna " << j + 1 << ": ";
			cin >> matriz[i][j];
		}
	}
}

// Subprograma recursivo para calcular la suma de la diagonal
void diagonalSuma(int matriz[][3], int columnas, int filas, int ind, int &sumaTotal) {
	if (ind < columnas && ind < filas) {
		sumaTotal += matriz[ind][ind];
		diagonalSuma(matriz, columnas, filas, ind + 1, sumaTotal);
	}
}

int main() {
	int matriz[3][3];
	int columnas = 3;
	int filas = 3;
	int sumaTotal = 0, ind = 0;
	
	cargarDatos(matriz, filas, columnas);
	
	diagonalSuma(matriz, columnas, filas, ind, sumaTotal);
	
	cout << "La matriz ingresada es:" << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\NLa suma de los elementos en la diagonal de la matriz es: " << sumaTotal << endl;
	
	return 0;
}

