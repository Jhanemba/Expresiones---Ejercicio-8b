/*
Ejercicio 8: Escriba un programa que lea de la entrada est�ndar los dos catetos
de un tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa.
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