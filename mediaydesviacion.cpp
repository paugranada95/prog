// Programa para introducir 3 valores y resolver la media y desviacion tipica de esos valores


#include <iostream>
#include <cmath>
using namespace std;

int main() {

	cout << "Bienvenidos al programa para resolver la media y desviacion tipica de los 3 valores introducidos por usted\n" << endl;

	double x1 = 0.0, x2 = 0.0, x3 = 0.0;
	double media = 0.0, desviacion = 0.0;

	cout << "Introduce el primer valor:";
	cin >> x1;
	cout << "Introduce el segundo valor:";
	cin >> x2;
	cout << "Introduce el tercer valor:";
	cin >> x3;

	media = (x1 + x2 + x3) / 3;
	desviacion = sqrt((pow(x1 - media, 2) + pow(x2 - media, 2) + pow(x3 - media, 2)) / 3);

	cout << "La media tipica es:" << media << endl;
	cout << "La desviacion tipica es:" << desviacion << endl;

}
