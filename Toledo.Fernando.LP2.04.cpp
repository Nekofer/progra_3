//fernando toledo - UQI - 11/09/2019 - Programa que muestra una palabra al reves, en mayusculas y en minusculas

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	system("color f9");
	char cadena[20];
	int i;
	cout << "Ingrese una palabra: "; cin.getline(cadena,20);
	cout << "Palabra al reves: ";
	for (i=strlen(cadena)-1; i>=0; i--)
	{
		cout << cadena[i];
	}
	cout << endl <<"Palabra en mayusculas: " <<strupr(cadena) << endl;
	cout << "Palabra en minusculas: " <<strlwr(cadena) << endl;
	system ("pause>nul");
	return 0; 
}
