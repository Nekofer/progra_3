//Fernando Toledo - UQI - 12/11/2019 - programa que crea informacion de un archivo de texto

#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	char nombre[80];
	char n_archivo[14];
	char otro;
	cout << "Introduzca el nombre del archivo: "; cin >> n_archivo;
	strcat(n_archivo,".txt");
	ofstream archivo_salida(n_archivo);
	cout << "El nombre del archivo sera: " << n_archivo << endl;
	do
	{
		cout << "Nombre: "; cin >> nombre;
		archivo_salida << strupr(nombre)<< endl;
		cout << "Quiere ingresar otro nombre [s/n]: "; otro=getch();
		cout << endl;
	} while (otro=='S'||otro=='s');
	archivo_salida.close();
	return 0;
}
