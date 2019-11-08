// Programa que calcula los segundos en dias, horas y minutos


#include <iostream>
using namespace std;

int main() {

	cout << "Bienvenidos al programa que calcula los segundos en dias, horas y minutos\n" << endl;

	int dias = 0, horas = 0, minutos = 0, segundos = 0;

	cout << "Introduzca los segundos:";
	cin >> segundos;	

	dias = segundos / 86400; // Algoritmo para dividir los segundos introducidos en los segundos que contiene un dia
	horas = segundos % 86400 / 3600; // saca el resto de la division de los segundos de un dia dividiendo el resto por los segundos que contiene una hora
	minutos = segundos % 86400 % 3600 / 60; // mismo proceso pero dividiendo los segundos que tiene un minuto con el resto de los segundos que tiene una hora
	segundos = segundos % 86400 % 3600 % 60; // saca el resto de todos los segundos que contiene dia, hora y minuto mas los segundos

	cout << "los dias son:" << dias << " con:" << horas << "horas, " << minutos << "minutos y " << segundos << "segundos" << endl;
	
}
