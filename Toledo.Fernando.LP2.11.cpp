//Fernando Toledo - UQI - 23/10/2019 - Programa de informacion de libros

#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct caract_libro
{
	int codigo;
	char titulo[30];
	char autor[30];
	char editorial[15];
	char genero[15];
	float precio;
	int existencias;
} libro[20];

int posicionL=0;


void captur()
{
	posicionL++;
	libro[posicionL].codigo=posicionL;
	cout << "\n-> Ingrese el codigo: " << libro[posicionL].codigo << endl;
	cout << "\n-> Ingrese el titulo: "; cin.getline(libro[posicionL].titulo,30); cin.getline(libro[posicionL].titulo,30);
	cout << "\n-> Ingrese el autor: "; cin.getline(libro[posicionL].autor,30); 
	cout << "\n-> Ingrese la editorial: "; cin.getline(libro[posicionL].editorial,30); 
	cout << "\n-> Ingrese el Genero: "; cin.getline(libro[posicionL].genero,30);
	cout << "\n-> Ingrese el precio: "; cin >> libro[posicionL].precio;
	cout << "\n-> Ingrese las existencias: "; cin >> libro[posicionL].existencias;
	system("cls");
}

void consul()
{
	int aux;
	cout << "\nIngrese el codigo del libro a consultar: "; cin >> aux;
	if (aux<=posicionL)
	{
		cout << "\n-> Codigo: " << libro[aux].codigo << endl;
		cout << "\n-> Titulo: " << libro[aux].titulo << endl;
		cout << "\n-> Autor: " << libro[aux].autor << endl;
		cout << "\n-> Editorial: " << libro[aux].editorial << endl;
		cout << "\n-> Genero: " << libro[aux].genero << endl;
		cout << "\n-> Precio: " << libro[aux].precio << endl;
		cout << "\n-> Existencias: " << libro[aux].existencias << endl;
		system("pause>nul");
	}
	else 
	{
		cout << "\nLibro no encontrado...";
	}
	system("cls");
}

void modi()
{
	char pass[10];
	int correcto;
	int intento;
	char contrasena[]="password"; 
	int opModi;
    intento=1;
    correcto=0;
    cout << "\nIntroduzca la contrasena: "; cin >> pass; cout << "\n";
    if (strcmp(pass,contrasena)==0) correcto=1;
    while ((correcto==0)&&(intento<3))
    {
        intento++;
        cout << "Contrasena incorrecta... " << "Introduzca la contrasena de nuevo: "; cin >> pass; cout << "\n";
        if (strcmp(pass,contrasena)==0) correcto=1;
    }
    if (correcto==0) cout << "\nSe han excedido el numero de intentos.";
    else
        {
            cout << "Contraseña aceptada...\n";
			int aux;
			cout << "\nIngrese el codigo del libro a consultar: "; cin >> aux;
			if (aux<=posicionL)
			{
				cout << "\n-> Codigo: " << libro[aux].codigo << endl;
				cout << "\n-> Titulo: " << libro[aux].titulo << endl;
				cout << "\n-> Autor: " << libro[aux].autor << endl;
				cout << "\n-> Editorial: " << libro[aux].editorial << endl;
				cout << "\n-> Genero: " << libro[aux].genero << endl;
				cout << "\n-> Precio: " << libro[aux].precio << endl;
				cout << "\n-> Existencias: " << libro[aux].existencias << endl;
				system("pause>nul");
			}
			else 
			{
				cout << "\nLibro no encontrado...";
			}
			
			cout << "\nQue dato va a modificar [1=Precio / 2=Existencias]: "; cin >> opModi;
			switch (opModi)
			{
				case 1: cout << "\nIngrese el nuevo precio: "; cin >> libro[posicionL].precio; break;
				case 2: cout << "\nIngrese las nuevas existencias: "; cin >> libro[posicionL].existencias; break;
			}
    	}
    system ("cls");
}

void venta()
{
	int exis;
	int aux;
	cout << "\nIngrese el codigo del libro a consultar: "; cin >> aux;
	if (aux<=posicionL)
	{
		cout << "\n-> Codigo: " << libro[aux].codigo << endl;
		cout << "\n-> Titulo: " << libro[aux].titulo << endl;
		cout << "\n-> Autor: " << libro[aux].autor << endl;
		cout << "\n-> Editorial: " << libro[aux].editorial << endl;
		cout << "\n-> Genero: " << libro[aux].genero << endl;
		cout << "\n-> Precio: " << libro[aux].precio << endl;
		cout << "\n-> Existencias: " << libro[aux].existencias << endl;
		system("pause>nul");
	}
	else 
	{
		cout << "\nLibro no encontrado...";
	}
	cout << "\nCuantos libros va a querer: "; cin >> exis;
	cout << "\nEl total sera $" << exis*libro[aux].precio;
	cout << endl << endl;
	libro[aux].existencias=libro[aux].existencias-exis;
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
		cout << "-> Modificacion [3] \n";
		cout << "-> Venta [4] \n";
		cout << "-> Salir [5] \n\n";
		cout << "Ingrese el apartado: "; cin >> op;
		switch (op)
		{
			case 1: captur(); break;
			case 2: consul(); break;
			case 3: modi(); break;
			case 4: venta(); break;
		} 
	} while (op!=5);
	system ("pause>nul");
	return 0;
}
