//Fernando Toledo - UQI - 15/11/2019 - programa que lee un archivo de texto

#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
using namespace std;

int main()
{
	system("color f9");
	char ruta[40];
	char archivo[12];
	char linea[80];
	cout << "Lectura de archivo ASCII...\n\n";
	cout << "Teclee el nombre y extension del archivo (ejem: datos.txt): "; cin >> archivo;
	cout << "Archivo Buscado... " << archivo << "\n\n"; 
	ifstream leer_arc (archivo);
	if (leer_arc)      
		cout << "Apertura con exito\n\n";  
	else      
		cout << "No se ha podido abrir el archivo\n";

	while (!leer_arc.eof()) 
	{
		leer_arc >> linea; 
		cout << linea << endl;
		Sleep(500); 
	};
	cout<<"\n | Fin de lectura de archivo |\n\n";
	leer_arc.close(); 
	system("pause>nul");
	return 0;
}
