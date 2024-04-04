//Fernando Toledo - UQI - 13/12/2019 - Programa que suma valores y muestra su direccion

#include <iostream>

using namespace std;

int main()
{
	system ("color f9");
	int a, b, resul;
	int *p1, *p2, *p3;
	cout << "Ingrese un valor [entero]: "; cin >> a;
	cout << "Ingrese un valor [entero]: "; cin >> b;
	resul=a+b;
	cout << "El resultado de la suma es: " << resul << endl;
	p1=&a;
	p2=&b;
	cout << "La direccion de a es: " << p1 << endl;
	cout << "La direccion de b es: " << p2 << endl;
	cout << "p1 + p2 = " << *p1+*p2 << endl;
	p3=&resul;
	cout << "La direccion de Resultado es: " << p3 << endl;
	return 0;
}
