/* Programa para calcular la suma, resta, producto y division de dos numeros reales */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cout << "Bienvenidos al programa que calcula la suma, resta, producto y division al instante de dos numeros reales  " << endl;

	double numero1 = 0.0, numero2 = 0.0;
	double resultado1 = 0.0, resultado2 = 0.0, resultado3 = 0.0, resultado4 = 0.0;  

	cout << "Introduce el primero numero: ";
	cin >> numero1;
	cout << "Introduce el segundo numero: ";
	cin >> numero2;

	/* Algoritmos del programa para la suma, resta, producto y division */
	
	resultado1 = numero1 + numero2;
	resultado2 = numero1 - numero2;
	resultado3 = numero1 * numero2;
	resultado4 = numero1 / numero2;

	cout << "el resultado de la suma es: " << resultado1 << endl;
	cout << "el resultado de la resta es: " << resultado2 << endl;
	cout << "el resultado del producto es: " << resultado3 << endl;
	cout << "el resultado de la division es: " << resultado4 << endl;

}
