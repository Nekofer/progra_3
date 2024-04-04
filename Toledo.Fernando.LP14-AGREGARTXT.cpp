//Fernando Toledo - UQI - 12/11/2019 - programa que incrementa la informacion de un archivo de texto

#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	system ("color f9");
	char nombre[80];
	char n_archivo[14];
	char opp;
	cout << "Introduzca el nombre del archivo: "; cin >> n_archivo;
	strcat(n_archivo,".TXT");
	ofstream archivo_salida(n_archivo,ios_base::app);
	cout << "El nombre del archivo sera: " << n_archivo << endl;
	do
	{
		cout << "Nombre: "; cin >> nombre;
		archivo_salida << nombre << endl;
		cout << "Quiere ingresar otro nombre [s/n]: "; cin >> opp;
		cout << endl;
	} while (opp=='S'||opp=='s');
	archivo_salida.close();
	return 0;
}
