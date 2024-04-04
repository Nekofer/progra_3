// Fernando Toledo - UQI - 26/11/2019 - Programa que muestra una palabra las palabras de un archivo ar reves y con guiones

#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

using namespace std;

void illuso()
{
	char ruta[40];
	char archivo[12];
	char linea[80];
	char op;
	do
	{
		cout << "\n  | Lectura de archivo |\n\n";
		cout << "Teclee el nombre y extension del archivo [EN MAYUSCULAS]: "; cin >> archivo;
		strcat(archivo,".TXT");
		cout << "Archivo Buscado... " << archivo << "\n\n"; 
		ifstream leer_arc (archivo);
		Sleep(700);
		cout << "-> Buscando archivo...";
		if (leer_arc)      
		{
			cout << " Apertura con exito\n\n";  
		}
		else      
		{
			cout << "No se ha podido abrir el archivo\n";
		}
		while (!leer_arc.eof()) 
		{
			leer_arc >> linea; 
			cout << linea << endl;
			Sleep(400);
			for (int x=strlen(linea)-1; x>=0; x--)
			{
				cout << "-" << linea[x];
			}
			cout << endl << endl;
		};
		cout << "Desea abrir otro archivo [S / N]: "; cin >> op;
		leer_arc.close(); 
		system ("cls");
	} while (op=='S' or op=='s');
	cout<<"\n | Fin de lectura de archivo |\n\n";
	system("pause>nul");
}

int main()
{
	system ("color f9");
	illuso();
	return 0;
}
