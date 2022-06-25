/*
Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos
de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float catetoAdyacente, catetoOpuesto;
	float resultado = 0;

	cout << "Introduzca el cateto adyacente: \n"; cin >> catetoAdyacente;
	cout << "Introduzca el cateto opuesto: \n"; cin >> catetoOpuesto;

	resultado = sqrt(pow(catetoAdyacente, 2) + pow(catetoOpuesto, 2));

	cout.precision(7);
	cout << "El resultado es: " << resultado;

	return 0;
}