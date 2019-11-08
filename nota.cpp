/* Programa que calcula la nota final de programacion teniendo en cuenta 
3 notas: teoria, practica, problemas.  teoria corresponde a un 70%, practica 
20%, problemas 10%. */



#include <iostream>
using namespace std;

int main() {

	cout << "Bienvenido al programa que va calcular la nota total de programacion\n" << endl;

	float teoria = 0.0, practica = 0.0, problemas = 0.0;
	float nota_final = 0.0;

	cout << "Introduca las notas siguiendo el mismo orden de teoria, practica y problemas siendo el 1 la minima y 10 la maxima:"; 
	cin >> teoria >> practica >> problemas; // Las notas introducidas van del 1 al 10 siendo 1 la minima y 10 la maxima

	nota_final = (teoria * 0.70) + (practica * 0.20) + (problemas * 0.10);

	cout << "El resultado final de la nota de programacion es:" << nota_final << endl;

}
