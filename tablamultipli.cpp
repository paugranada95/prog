// Programa para calcular la tabla de multiplicar del 1 al 10

#include <iostream>
using namespace std;

int main() {

	cout << "Bienvenido al prgrama que te muestra la tabla de multiplicar del 1 al 10\n" << endl;

	int numero = 0;

	cout << "Introduce un numero entero del 1 al 10 para saber su tabla de multiplicar: ";
	cin >> numero;
	
	cout << numero << " x 1 = " << numero * 1 << endl;
	cout << numero << " x 2 = " << numero * 2 << endl;
	cout << numero << " x 3 = " << numero * 3 << endl;
	cout << numero << " x 4 = " << numero * 4 << endl;
	cout << numero << " x 5 = " << numero * 5 << endl;
	cout << numero << " x 6 = " << numero * 6 << endl;
	cout << numero << " x 7 = " << numero * 7 << endl;
	cout << numero << " x 8 = " << numero * 8 << endl;
	cout << numero << " x 9 = " << numero * 9 << endl;
	cout << numero << " x 10 = " << numero * 10 << endl;
}
