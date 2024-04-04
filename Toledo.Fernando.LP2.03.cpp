// Fernando Toledo - UQI - 13/09/2019 - Programa que pide tu voto

#include <iostream>
using namespace std;
int main()
{
	system ("color f9");
	int votos;
	int materias[50];
	int matematicas=0, deportes=0, lengEx=0;
	cout << "Programa que pedira su voto para una encuesta \n\n";
	for (votos=0; votos<=49; votos++)
	{
		cout << "\nPersona " << votos+1 << " de 50...\n";
		cout << "Por favor ingrese su voto [1=Mate / 2=Deportes / 3=Leng Extrangeras]: "; cin >> materias[50];
		switch (materias[50])
		{
			case 1: matematicas++; break;
			case 2: deportes++; break;
			case 3: lengEx++; break;
		}
	}
	system ("pause>nul");
	cout << "El Total de matematicas fue: " <<matematicas << endl;
	cout << "El Total de deportes fue: " <<deportes << endl;
	cout << "El Total de lenguas extrangeras fue: " <<lengEx << endl;
	system ("pause>nul");
	return 0;
}
