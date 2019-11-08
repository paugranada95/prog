/* Programa que calcula un sueldo bruto introducido por el usuario a neto*/

#include <iostream>
using namespace std;

int main() {

	cout << "Bienvenido al programa para calcular tu sueldo neto" << endl;

	const double IRPF = 0.17, DESEMPLEO = 0.025, CONTINGENCIAS = 0.015;
	double salario_bruto = 0.0;
	double salario_neto = 0.0;
	double retenciones = 0.0;
	
	cout << "\nIntroduce el salario bruto: ";
	cin >> salario_bruto;
	
	retenciones = salario_bruto * (IRPF + DESEMPLEO + CONTINGENCIAS); 
	salario_neto = salario_bruto - retenciones;
	
	cout << "la retenciones son: " << retenciones << " y el salario neto es: " << salario_neto << endl;
}
