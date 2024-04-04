//Fernando Toledo - UQI - 23/09/2019 - Programa que muestra una matriz de 3x5 y vice versa

#include <iostream>
using namespace std;
int main()
{
	system ("color f9");
	int matriz [4][6];
	int fila, columna;
	cout << "Programa que muestra una matriz de 3x5 y vice versa\n\n";
	for (fila=1; fila<=3; fila++)
		for (columna=1; columna<=5; columna++)
		{
			cout << "\nIngrese el valor " << fila << " - " << columna << " : ";
			cin >> matriz [fila][columna];
		}
	for (fila=1; fila<=3; fila++)
		for (columna=1; columna<=5; columna++)
		{
			cout << matriz[fila][columna] << "\t";
			if (columna==5) cout << "\n\n";
		}
	system ("pause>nul");
	system ("cls");
	for (columna=1; columna<=5; columna++)
		for (fila=1; fila<=3; fila++)
		{
			cout << matriz[fila][columna] << "\t";
			if (fila==3) cout << "\n\n";
		}
	system ("pause>nul");
	return 0;
}
