//Fernando Toledo - 18/09/2019 - UQI - programa que ingresa valores a la matriz

#include <iostream>
#include <conio.h>
using namespace std;
void linea(int wethever)
{
	for (int fila=1; fila<=70; fila++)
	cout << char(wethever);
}
int main()
{
	system ("color f9");
	int matriz[3][4];
	int fila, columna;
	cout << "Ingrese los siguientes 12 valores enteros a la matriz: \n";
	for (fila=0; fila<=2; fila++)
		for (columna=0; columna<=3; columna++)
		{
			cout << "\nValor para " << fila << " - " << columna << " : " ;
			matriz [fila] [columna]=getch();
		}
	system  ("cls");
	cout << "Valores ingresados: \n\n";
	system ("pause>nul");
	linea(219);
	cout << endl << endl;
	for (fila=0; fila<=2; fila++)
		for (columna=0; columna<=3; columna++)
		{
			cout << char(matriz[fila][columna]) << "\t";
			if (columna==3) cout << "\n\n";
		}
	linea(219);
	cout << endl;
	system ("pause");
	return 0;
}
