//fernando toledo - UQI - 27/09/2019 - programa de Sistema de pago a empleados

#include <iostream>
#include <windows.h>
using namespace std;
void line(int ask)
{
	for (int ln=1; ln<=79; ln++)
		cout << char(ask);
}
void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
int main()
{
	char clave [5][5];
	char nombre [5][40];
	char puesto [5];
	int dia[5], pago[5];
	int p;
	int ent, mayor=0;
	cout << char(201); line(205);
	cout << endl << char(186) << "      Sistema de pago a empleados      \n";
	cout << char(186) << "Clave\tNombre\t\t\t\tPuesto[A-D]\tDias\tPago\n";
	cout << char(200); line(205); cout << endl;
	for (p=0; p<=4; p++)
	{
		gotoxy(0, p+4); cout << "-"; cin>>clave[p];
		gotoxy(6, p+4); cout << "-"; cin.getline(nombre[p],40); cin.getline(nombre[p],40);
		gotoxy(40, p+4); cout << "-"; cin >> puesto[p];
		gotoxy(55, p+4); cout << "-"; cin >> dia[p];
		switch(puesto[p])
		{
			case 'A': pago[p]=dia[p]*200; break;
			case 'B': pago[p]=dia[p]*160; break;
			case 'C': pago[p]=dia[p]*140; break;
			case 'D': pago[p]=dia[p]*100; break;
		}
		gotoxy (64, p+4); cout << "$" << pago[p];
		if (mayor<pago[p])
		{
			mayor=pago[p];
			ent=p;
		}
	}
	cout << "\n\n------------------------------------------------------------\n\n";
	cout << "El pago mas alto registrado es $" << pago[ent];
	cout << "\nEl empleado se llama " << nombre[ent];
	cout << "\n\n The End ";
	system ("pause>nul");
	return 0;
}
