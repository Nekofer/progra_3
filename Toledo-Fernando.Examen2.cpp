//		Fernando  Toledo		//

#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void guardar()
{
	char nombre[80];
	char n_archivo[14];
	char opp;
	cout << "\nIntroduzca el nombre del archivo [EN MAYUSCULAS Y AGREANDO EL .TXT]: "; cin >> n_archivo;
	ofstream archivo_salida(n_archivo,ios_base::app);
	cout << "\nEl nombre del archivo sera: " << n_archivo << endl;
	do
	{
		cout << "\nNombre: "; cin >> nombre;
		archivo_salida << nombre << endl;
		cout << "Quiere ingresar otro nombre [s/n]: "; cin >> opp;
		cout << endl;
	} while (opp=='S'||opp=='s');
	archivo_salida.close();
	system("pause>nul");
	system("cls");
}

void leer()
{
	char ruta[40];
	char archivo[12];
	char linea[80];
	cout << "\nLectura de archivo ASCII...\n\n";
	cout << "Teclee el nombre y extension del archivo (ejem: datos.txt): "; cin >> archivo;
	cout << "\nArchivo Buscado... " << archivo << "\n\n"; 
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
	system("cls");
}

int main()
{
	int opp;
	do
	{
		system ("color f9");
		cout << "\n Menu: \n\n";
		cout << "1) Crear archivo \n";
		cout << "2) Leer archivo \n";
		cout << "3) Salir \n\n";
		cout << "Ingrese el apartado: "; cin >> opp;
		switch (opp)
		{
			case 1: guardar(); break;
			case 2: leer(); break;
		}
	} while (opp!=3);
	system ("pause");
	return 0;
}

