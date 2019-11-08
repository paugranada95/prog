// Programa para calcular la ecuaciones de segundo grado

#include <iostream>
#include <cmath>  // Para calcular la raiz cuadrada sqrt
using namespace std;

int main() {

	cout << "Bienvenido al programa para calcular la ecuaciones de segundo grado con sus dos soluciones antes de empezar debe saber que cuando la raiz es negativa no tiene  solucion\n" << endl;

	float a = 0.0, b = 0.0, c = 0.0;
	float solucion1 = 0.0, solucion2 = 0.0;

	cout << "Introduzca el valor de a(no puede intruducir el numero 0):";
	cin >> a;
	cout << "Introduzca el valor de b:";
	cin >> b;
	cout << "Introduzca el valor de c:";
	cin >> c;

	solucion1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a); 
	solucion2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * a);

	cout << "Las soluciones son:" << solucion1 << " y " << solucion2 << endl;

	// cuando a es 0 no se puede dividir por lo que estaria mal la ecuacion de segundo grado
	// cuando la raiz es negativa el compilador va a dar -nam que es que la ecuacion no tine solucion
	// Cuando la raiz es cero nos va dar la misma solucion es quiere decir que es solucion doble
}
