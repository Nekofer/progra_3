//Fernando Toledo - UQI - 21/10/2019 - Programa de ejemplo de union

#include <iostream>
using namespace std;

union UnEjemplo
{
	int a;
	char b;
	double c;
} UniEjem;

int main()
{
	system ("color f9");
	cout << "Ingrese un valor entero: "; cin >> UniEjem.a;
	cout << "Valor ingresado... " << UniEjem.a << endl;
	cout << "Ingrese un caracter: "; cin >> UniEjem.b;
	cout << "Caracter ingresado..." << UniEjem.b << endl;
	cout << "Ingrese un valor decimal: "; cin >> UniEjem.c;
	cout << "Decimal ingresado..." << UniEjem.c << endl << endl;
	cout << "Direccion de memoria RAM (a): " << &UniEjem.a << endl;
	cout << "Direccion de memoria RAM (b): " << &UniEjem.b << endl;
	cout << "Direccion de memoria RAM (c): " << &UniEjem.c << endl << endl;
	cout << "Tamaño en bytes de la estructura: " << sizeof(UniEjem) << endl;
	cout << "Tamaño en bytes del apartado a: " << sizeof(UniEjem.a) << endl;
	cout << "Tamaño en bytes del apartado b: " << sizeof(UniEjem.b) << endl;
	cout << "Tamaño en bytes del apartado c: " << sizeof(UniEjem.c) << endl;
	system("pause>nul");
	return 0;
}
