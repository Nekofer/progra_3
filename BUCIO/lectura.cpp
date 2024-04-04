//Lectura de Archivos de texto con el flujo ifstream
//Bachilleratos Tecnológicos UQI - Programación Leng. Prog II
//ISC Armando Bucio Gallardo - Dic 2017

#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
using namespace std;

int main()
{
	char ruta[40];
	char archivo[12];
	char linea[80];
	
	cout<<"Lectura de archivo ASCII...\n\n";
//	cout<<"Teclee la ruta de la ubicacion del archivo (ejem: c:\\carpeta\\...): ";
	//cin>>ruta;
	cout<<"Teclee el nombre y extension del archivo (ejem: datos.txt): ";
	cin>>archivo;
	
//	strcat(ruta,archivo); //uniendo cadenas para generar la ruta completa
	
	cout<<"Archivo Buscado ... "<< archivo <<"\n\n"; 
	
	ifstream leer_archivo (archivo); // lectura del archivo
	
	while (!leer_archivo.eof()) // ciclo de lectura línea por línea hasta el fin
	{
		leer_archivo>>linea; // lee la linea del archivo y la guarda el variable "linea"
		cout<<linea<<endl;	// muestra el contenido de la variable "linea"
		Sleep(1000); //Hace una pausa de 1 seg (1000ms) 
	};
	
	cout<<"\n -- Fin de lectura de archivo --";
	
	leer_archivo.close(); //cierra el archivo de texto
	
	system("pause>nul");
	return 0;
	
}
