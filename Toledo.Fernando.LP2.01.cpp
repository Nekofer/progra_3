// Fernando Toledo - UQI - 10/09/2019 - Programa que muestra el total de numeros sumados

#include <iostream>
using namespace std;
int main()
{
	system ("color f9");
	int nums[8];
	int i, total=0;
	for(i=0; i<=8; i++)
	{
		cout << "Introduzca el numero: "; cin >> nums[i];
	}
	cout << "Lista de numeros: \n";
	for (i=0; i<8; i++)
	{
		cout << nums[i];
		total+=nums[i];
	}
	cout << "\nLa suma de los numeros es: " << total;
	system ("pause>nul");
	return 0;
}
