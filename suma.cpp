/* Programa para sumar dos numeros reales */

#include <iostream>
using namespace std;

int main() {

	cout << "Vien venidos al programa que suma dos numeros" << endl;

	double numero1 = 0.0, numero2 = 0.0, resultado = 0.0;

	cout << "Introduce el primero numero: ";
	cin >> numero1;
	cout << "Introduce el segundo numero: ";
	cin >> numero2;

	/* Algoritmo del programa para la suma de dos numeros */
	resultado = numero1 + numero2;

	cout << "el resultado de la suma es: " << resultado << endl;

}
