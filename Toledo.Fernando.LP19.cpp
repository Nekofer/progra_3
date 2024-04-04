// Fernando Toledo - UQI - 25/11/2019 - Programa que muestra la cantidad de vocales y consonantes de un archivo de texto

#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>

using namespace std;
int vocales=0;
int Novocales=0; 

void leer()
{
	char ruta[40];
	char archivo[12];
	char linea[80];
	cout << "  | Lectura de archivo |\n\n";
	cout << "Teclee el nombre y extension del archivo [EN MAYUSCULAS]: "; cin >> archivo;
	strcat(archivo,".TXT");
	cout << "Archivo Buscado... " << archivo << "\n\n"; 
	ifstream leer_arc (archivo);
	Sleep(1000);
	cout << "-> Buscando archivo...";
	if (leer_arc)      
		cout << " Apertura con exito\n\n";  
	else      
		cout << "No se ha podido abrir el archivo\n";

	while (!leer_arc.eof()) 
	{
		leer_arc >> linea; 
		cout << linea << endl;
		Sleep(500);
		for (int x=0; x<strlen(linea); x++)
			if ((linea[x]=='a')or (linea[x]=='e')or (linea[x]=='i')or (linea[x]=='o')or (linea[x]=='u'))
			{
				vocales++;
			}
			else
			{
				Novocales++;
			}
	};
	cout<<"\n | Fin de lectura de archivo |\n\n";
	leer_arc.close(); 
	system("pause>nul");
	
}

int main()
{
	system("color f9");
	leer();
	cout << "-> Numero de vocales: " << vocales << endl << endl;
	cout << "-> Numero de consonantes: " << Novocales << endl;
	cout << endl;
	system ("pause");
	return 0;
}
