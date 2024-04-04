// Fernando Toledo - UQI - 10/12/2019 - Programa que muestra la letra y direccion de una variable

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	char *pc;
	char c;
	pc=&c;
	system ("color f9");
	cout << " | Programa que muestra la letra y direccion de una variable |" << endl << endl;
	cout << " C:" << "  Direccion:" << " PC:" << endl << endl;
	for (c='A'; c<='Z'; c++)
	{
		cout << " " << c << " - " << &pc << " - " << *pc << endl;
		Sleep (300);
	}
	cout << endl;
	system ("pause");
	return 0;
}
