//		Fernando  Toledo		//

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct comida
{
	int codigo;
	char alimento[20];
	int exis;
	float precio;
} ali[10]; //ali de alimentos xd

int posicionA=0;

void captur()
{
	posicionA++;
	ali[posicionA].codigo=posicionA;
	cout << endl;
	cout << "-> Codigo: " << ali[posicionA].codigo << endl;
	cout << "-> Ingrese nombre del alimento: "; cin.getline(ali[posicionA].alimento,20); cin.getline(ali[posicionA].alimento,20);
	cout << "-> Ingrese las existencias del alimento: "; cin >> ali[posicionA].exis;
	cout << "-> Ingrese el precio del alimento: "; cin >> ali[posicionA].precio;
	system ("cls");
}

void leer()
{
	int aux;
	cout << "\nIngrese el codigo del alimento a consultar: "; cin >> aux;
	if (aux<=posicionA)
	{
		cout << endl;
		cout << "-> Ingrese nombre del alimento: " << ali[aux].alimento << endl; // solo puse estos porque fue los que pidio
		cout << "-> Ingrese el precio del alimento: " << ali[aux].precio << endl;
		system("pause>nul");
	}
	else 
	{
		cout << "\nAlimento no encontrado..."; // el maximo es 10 y empieza por el 1
	}
	system("cls");
}

void venta()
{
	int exis;
	int aux;
	cout << "\nIngrese el codigo del alimento a vender: "; cin >> aux;
	if (aux<=posicionA)
	{
		cout << "-> Nombre del alimento: " << ali[aux].alimento << endl;
		cout << "-> Existencias del alimento: " << ali[aux].exis << endl; //aqui si puse las existencias xd
		cout << "-> Precio del alimento: " << ali[aux].precio << endl;
		system("pause>nul");
	}
	else 
	{
		cout << "\nAlimento no encontrado...";
	}
	cout << "\nCuantas va a querer: "; cin >> exis;
	cout << "\nEl total sera $" << exis*ali[aux].precio; // al final resta las existencias
	cout << endl << endl;
	ali[aux].exis=ali[aux].exis-exis;
	system ("pause");
	system("cls");
}

int main()
{
	system ("color f9");
	int op;
	do 
	{
		cout << "\nMenu: \n\n";
		cout << "-> Captura [1] \n";
		cout << "-> Consulta [2] \n";
		cout << "-> Venta [3] \n";
		cout << "-> Salir [4] \n\n";
		cout << "Ingrese el apartado: "; cin >> op;
		switch (op)
		{
			case 1: captur(); break;
			case 2: leer(); break;
			case 3: venta(); break;
		} 
	} while (op!=4);
	system ("pause>nul");
	return 0;
}
