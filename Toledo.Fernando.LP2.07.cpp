//Fernando Toledo - UQI - 23/09/2019 - Programa que muestra las posiciones del numero mayor y menor en una matriz

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system ("color f9");
	int matriz [4][6];
	int fila, columna;
	int mayor=0, menor=50, filaMa, coluMa, filaMe, coluMe;
	srand(time(NULL));
	cout << "Programa que muestra una matriz\n\n";
	for (fila=1; fila<=3; fila++)
		for (columna=1; columna<=5; columna++)
		{
			matriz[fila][columna]=1+rand()%(51-1);
			if (matriz[fila][columna]>mayor)
			{
				mayor=matriz[fila][columna];
				filaMa=fila;
				coluMa=columna;
			}
			if (matriz[fila][columna]<menor)
			{
				menor=matriz[fila][columna];
				filaMe=fila;
				coluMe=columna;
			}
		}
	for (fila=1; fila<=3; fila++)
		for (columna=1; columna<=5; columna++)
		{
			cout << matriz[fila][columna] << "\t";
			if (columna==5) cout << "\n\n";
		}
	cout << "\nEl numero mayor es: " << mayor << endl;
	cout << "El numero de fila es: " << filaMa << "  " << "El numero de columna es: " << coluMa << " " << endl;
	cout << "El numero menor es: " << menor << endl;
	cout << "El numero de fila es: " << filaMe << "  " << "El numero de columna es: " << coluMe << " " << endl;
	system ("pause>nul");
	return 0;
}
