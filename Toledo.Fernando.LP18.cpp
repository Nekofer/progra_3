//Fernando Toledo - UQI - 12/11/2019 - programa del juego del ahorcado

#include <iostream> 
#include <string.h>
#include <fstream>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std; 

char palabra[]="PROGRAMACION";
char ahorcado[]="------------";
char letra;
int num;
int terminado=1;

void leer()
{
	char ruta[40];
	char archivo[12];
	char linea[80];
	cout << "Lectura de archivo ASCII...\n\n";
	cout << "Teclee el nombre y extension del archivo (ejem: datos.txt): "; cin >> archivo;
	cout << "Archivo Buscado... " << archivo << "\n\n"; 
	ifstream leer_arc (archivo);
	if (leer_arc)      
	{
		cout << "Apertura con exito\n\n";  
		srand(time(NULL));
		num=1+rand()%(11-1);
		cout << "-> " << num << endl << endl;
	}
	else   
	{   
		cout << "No se ha podido abrir el archivo\n";
	}
	while (!leer_arc.eof()) 
	{
		leer_arc >> linea; 
		cout << linea << endl;
		Sleep(500); 
	};
	cout<<"\n | Fin de lectura de archivo |\n\n";
	leer_arc.close(); 
	system("pause>nul");
}

int encuentra(char caracter)
{
	int encontro=0;
	for(int x=0; x<=11; x++)
		if(palabra[x]==caracter)
			{
				ahorcado[x]=palabra[x];
				encontro=1;
			};

	cout<<ahorcado;
	return encontro;
}

int main() 
{
	system ("color f9");
	leer();
	cout<< "JUEGO DEL AHORCADO..."<<endl;
	do{
		cout<<"\n\t\tIntento "<<terminado<<" de 10 Ingrese letra: ";cin>>letra;
		if (encuentra(letra)==0)
			cout<<"\nNo se encontro..."; 
		else
			{
				cout<<"\nEcontrado!... ";
				terminado++;
			}
		
	}while (terminado<=10);
 return 0;
}
