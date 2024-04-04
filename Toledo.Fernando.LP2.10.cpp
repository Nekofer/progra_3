//Fernando Toledo - UQI - 08/10/2019 - programa que procesa datos ingresados

#include <iostream>
#include <string.h>
using namespace std;
struct
{
	char nombre[40];
	float estatura;
	int edad;
	char color[15];
	char ciudad[30];
	int matricula;
} identi;
struct
{
	char op, opEli;
	int opIde, opModi;
	char opSali;
} op;
int main()
{
	system ("color f9");
	do
	{
		cout << endl << endl;
		cout << "MENU: \n\n";
		cout << "\n1) Captura de datos\n ";
		cout << "\n2) Lectura de datos\n ";
		cout << "\n3) Modificar datos\n ";
		cout << "\n4) Eliminacion\n ";
		cout << "\n5) Salir del sistema\n";
		cout << "\nElija una opcion: "; cin >> op.opIde;
		system ("cls");
		switch (op.opIde)
		{
			case 1: cout << "\n1) Captura de datos: \n";
					cout << "\nIngrese nombre: "; cin.getline(identi.nombre,40); cin.getline(identi.nombre,40);
					cout << "\nIngrese estatura: "; cin >> identi.estatura;
					cout << "\nIngrese edad: "; cin >> identi.edad;
					cout << "\nIngrese color favorito: "; cin.getline(identi.color,15); cin.getline(identi.color,15);
					cout << "\nIngrese ciudad donde vive: "; cin.getline(identi.ciudad,30); 
					cout << "\nIngrese matricula: "; cin >> identi.matricula; system("cls"); break;
					
			case 2: cout << "\n2)Datos guardados: \n";
					cout << "\nNombre: " <<identi.nombre << endl;
					cout << "\nEstatura: " <<identi.estatura<< endl;
					cout << "\nEdad: " <<identi.edad << endl;
					cout << "\nColor: " <<identi.color << endl;
					cout << "\nCiudad: " <<identi.ciudad << endl;
					cout << "\nMatricula: " <<identi.matricula<< endl; system("pause>nul") ; system("cls"); break;

			case 3: cout << "\n3)Datos a modificar: \n";
					cout << "\nNombre: " <<identi.nombre << " [1]" <<endl;
					cout << "\nEstatura: " <<identi.estatura<< " [2]" <<endl;
					cout << "\nEdad: " <<identi.edad << " [3]" <<endl;
					cout << "\nColor: " <<identi.color << " [4]" <<endl;
					cout << "\nCiudad: " <<identi.ciudad << " [5]" <<endl;
					cout << "\nMatricula: " <<identi.matricula<< " [6]" <<endl; 
					cout << "\nEliga el dato a cambiar: "; cin >> op.opModi; 
					switch (op.opModi)
					{
						case 1: cout << "\nIngrese el nuevo nombre: "; cin.getline(identi.nombre,40); cin.getline(identi.nombre,40); break;
						case 2: cout << "\nIngrese nuevo estatura: "; cin >> identi.estatura; break;
						case 3: cout << "\nIngrese la nueva edad: "; cin >> identi.edad; break;
						case 4: cout << "\nIngrese el nuevo color: "; cin.getline(identi.color,15); cin.getline(identi.color,15); break;
						case 5: cout << "\nIngrese la nueva ciudad: "; cin.getline(identi.ciudad,30);cin.getline(identi.ciudad,30); break;
						case 6: cout << "\nIngrese la nueva matricula: ";  cin >> identi.matricula; break;
					} system("cls"); break;

			case 4: cout << "Informacion para eliminar: \n";
					cout << "\nNombre: " <<identi.nombre << endl;
					cout << "\nEstatura: " <<identi.estatura<< endl;
					cout << "\nEdad: " <<identi.edad << endl;
					cout << "\nColor: " <<identi.color << endl;
					cout << "\nCiudad: " <<identi.ciudad << endl;
					cout << "\nMatricula: " <<identi.matricula<< endl;
					cout << "\nEsta seguro de querer eliminar la informacion? [S / N]: "; cin >> op.opEli;
					switch (op.opEli)
					{
						case 'S': cout << "\nSe eliminara la informacion\n";
								  strcpy(identi.nombre,""); 
								  identi.estatura=0;
								  identi.edad=0;
								  strcpy(identi.color,"");    
								  strcpy(identi.ciudad,"");
								  identi.matricula=0; break;                                 
						case 'N': cout << "\nNo se eliminara la informacion\n"; break;
					} system("pause>nul"); system("cls"); break;
					
		}
		cout << "\nPulse cualquier tecla para continuar... \n"; system ("pause>nul");
	} while (op.opIde!=5);
	system ("pause>nul");
	return 0;
}
