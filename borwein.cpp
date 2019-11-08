// Programa para calcular el numero de PI basado en una serie de ecuaciones propuesto por Borwein


#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cout << "Bienvenidos al programa para calcular el numero PI\n" << endl;

	cout << "Este programa va escribir los valores de PI0, PI1, PI2\n" << endl;

	long double pi0 = 0.0, pi1 = 0.0, pi2 = 0.0;
	double x0 = 0.0, x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;

	//Algoritmo de PI0 

	pi0 = (2 + sqrt(2));
	cout << "Valor de PI0 es:" << pi0 << endl;

	//Algoritmo de PI1

	x0 = sqrt(2);
	x1 = (1.0 / 2.0) * (sqrt(x0) + (1 / sqrt(x0)));
	y1 = pow (2, 1.0 / 4.0);
	pi1 = pi0 * ((x1 + 1) / (y1 + 1));
	cout << "Valor de PI1 es:" << pi1 << endl;

	//Algoritmo de PI2

	x2 = (1.0 / 2.0) * (sqrt(x1) + (1 / sqrt(x1)));
	y2 = (y1 * sqrt(x1) + (1 / sqrt(x1))) / (y1 + 1);
	pi2 = pi1 * ((x2 + 1) / (y2 + 1));
	cout << "Valor de PI2 es:" << pi2 << endl;

}
