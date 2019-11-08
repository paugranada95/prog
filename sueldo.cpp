/* Programa que calcula la retencion del IRPF*/

#include <iostream>
using namespace std;

int main() {

	cout << "Bienvenido al programa para calcular la retencion del IRPF" << endl;

	const double IRPF = 0.17;
	double salario_bruto = 0.0;
	double retencion = 0.0;
	
	cout << "\nIntroduce el salario bruto: ";
	cin >> salario_bruto;
	
	retencion = salario_bruto * IRPF;
	
	cout << "la retencion es: " << retencion << endl;

}
