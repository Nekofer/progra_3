//Fernando Toledo - UQI - 13/12/2019 - Programa que pide un valor, la direccion y el tamaño en bytes

#include <iostream>

using namespace std;

int main()
{
	system ("color f9");
	int a;
	int *p;
	cout << "Ingrese un valor entero: "; cin >> a;
	p=&a;
	while (a<=0)
	{
		cout << "ERROR...  - El valor debe ser mayor a 0 - ";
		cout << "Ingrese de nuevo el valor: "; cin >> a;
	}
	cout << "La direccion de  |a| es: " << &a << endl;
	cout << "La direccion de |p|: " << p << endl;
	cout << "El tamaño en bytes de |p| es: " << sizeof(p) << endl;
	system ("pause");
	return 0;
}
