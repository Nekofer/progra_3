// Fernando Toledo - UQI - 10/09/2019 - programa que muestra el promedio de edad y estatura

#include <iostream>
using namespace std;
int main()
{
	int edad[10];
	float estatura[10];
	float acEdad=0, acEstatura=0;
	for (int p=0; p<=9; p++)
	{
		cout << "\nPersona " << p+1 << " de 10...\n";
		cout << "Introduzca su edad: "; cin >> edad[p];
		cout << "Introduzca su estatura: "; cin >> estatura[p];
		acEdad+=edad[p];
		acEstatura+=estatura[p];
	}
	cout << "Promedio de edad: " << acEdad/10 << endl;
	cout << "Promedio de estatura: " << acEstatura/10 << endl;
	system ("pause>nul");
	return 0; 
}
