//Fernando Toledo - UQI - 21/10/2019 - Programa de ejemplo de estructura

#include <iostream>
using namespace std;

struct UnEjemplo
{
	int a;
	char b;
	double c;
} StruEjem;

int main()
{
	system ("color f9");
	cout << "Ingrese un valor entero: "; cin >> StruEjem.a;
	cout << "Valor ingresado... " << StruEjem.a << endl;
	cout << "Ingrese un caracter: "; cin >> StruEjem.b;
	cout << "Caracter ingresado..." << StruEjem.b << endl;
	cout << "Ingrese un valor decimal: "; cin >> StruEjem.c;
	cout << "Decimal ingresado..." << StruEjem.c << endl << endl;
	cout << "Direccion de memoria RAM (a): " << &StruEjem.a << endl;
	cout << "Direccion de memoria RAM (b): " << &StruEjem.b << endl;
	cout << "Direccion de memoria RAM (c): " << &StruEjem.c << endl << endl;
	cout << "Tama�o en bytes de la estructura: " << sizeof(StruEjem) << endl;
	cout << "Tama�o en bytes del apartado a: " << sizeof(StruEjem.a) << endl;
	cout << "Tama�o en bytes del apartado b: " << sizeof(StruEjem.b) << endl;
	cout << "Tama�o en bytes del apartado c: " << sizeof(StruEjem.c) << endl;
	system("pause>nul");
	return 0;
}
