//Fernando Toledo - UQI - 13/12/2019 - Programa que forma una matriz y muestra su direccion

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	system ("color f9");
	int matriz[3][3];
	int fila, columna;
	cout << "Ingrese los siguientes 9 valores enteros a la matriz: \n";
	for (fila=0; fila<=2; fila++)
		for (columna=0; columna<=2; columna++)
		{
			cout << "\nValor para " << fila << " - " << columna << " : " ;
			matriz [fila] [columna]=getch();
		}
	system  ("cls");
	cout << "Valores ingresados: \n\n";
	system ("pause>nul");
	cout << endl << endl;
	for (fila=0; fila<=2; fila++)
		for (columna=0; columna<=2; columna++)
		{
			cout << "  " << char(matriz[fila][columna]) << "\t";
			if (columna==2) cout << "\n\n";
		}
	cout << endl;
	cout << "Direccion de la fila: " << &fila << endl;
	cout << "Direccion de la columna: " << &columna << endl;
	cout << "Direccion de la matriz: " << &matriz << endl;
	cout << endl;
	system ("pause");
	return 0;
}
