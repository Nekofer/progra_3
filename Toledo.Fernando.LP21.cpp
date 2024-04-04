 // fernando toledo - UQI - 03/12/2019 - Programa de numerologia que tambien lo guarda en un archivo de texto
// 65951546=41

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

char opp;
char nombre[30];
char convertido1[3];
char numm1[2]={" "};
char numm2[2]={" "};
int num1, num2;
int resul2;	
int resul=0;
char n_archivo[14];
char save[30];
		
void fma()
{
	cout << "Introduzca el nombre del archivo [EN MAYUSCULAS]: "; cin >> n_archivo;
	strcat(n_archivo,".TXT");
	ofstream archivo_salida(n_archivo);
	do
	{
		char numm1[2]={" "};
		char numm2[2]={" "};
		int num1, num2;
		int resul2;	
		int resul=0;
		int v1=0, v2=0, v3=0, v4=0, v5=0, v6=0, v7=0, v8=0, v9=0;
		cout << "Ingrese su nombre [en minusculas]: "; cin >> nombre;
		for (int x=0; x<=strlen(nombre); x++)
			switch (nombre[x])
			{
				case 'a': case 'j': case 's': v1=v1+1; break;
				case 'b': case 'k': case 't': v2=v2+2; break;
				case 'c': case 'l': case 'u': v3=v3+3; break;
				case 'd': case 'm': case 'v': v4=v4+4; break;
				case 'e': case 'n': case 'w': v5=v5+5; break;
				case 'f': case 'o': case 'x': v6=v6+6; break;
				case 'g': case 'p': case 'y': v7=v7+7; break;
				case 'h': case 'q': case 'z': v8=v8+8; break;
				case 'i': case 'r': v9=v9+9; break;
			}
	resul=v1+v2+v3+v4+v5+v6+v7+v8+v9;												
		
	strcpy(numm1," ");
	strcpy(numm2," ");	
	itoa(resul,convertido1,10);
	cout<<"\n-> Numero convertido a cadena... " << convertido1 << endl;
	numm1[0]=convertido1[0];
	numm2[1]=convertido1[1];
	cout << endl << numm1 << " +" << numm2;
	num1=atoi(numm1);
	num2=atoi(numm2);
	resul2=num1+num2;
	cout << endl << "\nEl resultado es: " << resul2 << endl;
	if (resul2>=10)
	{
		switch(resul2)
		{
			case 10: cout << "\n - 1 - Lider";strcpy(save,"- 1 - Lider") ; break;
			case 11: cout << "\n - 2 - Amigo";strcpy(save,"- 2 - Lider") ; break;
			case 12: cout << "\n - 3 - Comunicador";strcpy(save,"- 3 - Lider") ; break;
			case 13: cout << "\n - 4 - Constructor";strcpy(save,"- 4 - Lider") ; break;
			case 14: cout << "\n - 5 - Espiritu libre";strcpy(save,"- 5 - Lider") ; break;
			case 15: cout << "\n - 6 - Responsable";strcpy(save,"- 6 - Lider") ; break;
			case 16: cout << "\n - 7 - Perfeccionista";strcpy(save,"- 7 - Lider") ; break;
			case 17: cout << "\n - 8 - Exitoso";strcpy(save,"- 8 - Lider") ; break;
			case 18: cout << "\n - 9 - Filosofo";strcpy(save,"- 9 - Lider") ; break;	
		}
	}	
	switch(resul2)
		{
			case 1: cout << "\n - 1 - Lider";strcpy(save,"- 1 - Lider") ; break;
			case 2: cout << "\n - 2 - Amigo";strcpy(save,"- 2 - Lider") ; break;
			case 3: cout << "\n - 3 - Comunicador";strcpy(save,"- 3 - Lider") ; break;
			case 4: cout << "\n - 4 - Constructor";strcpy(save,"- 4 - Lider") ; break;
			case 5: cout << "\n - 5 - Espiritu libre";strcpy(save,"- 5 - Lider") ; break;
			case 6: cout << "\n - 6 - Responsable";strcpy(save,"- 6 - Lider") ; break;
			case 7: cout << "\n - 7 - Perfeccionista";strcpy(save,"- 7 - Lider") ; break;
			case 8: cout << "\n - 8 - Exitoso";strcpy(save,"- 8 - Lider") ; break;
			case 9: cout << "\n - 9 - Filosofo";strcpy(save,"- 9 - Lider") ; break;	
		}
		archivo_salida << nombre << " " << save << endl;
		cout << "\n\nDesea ingresar otro nombre? [s / n]: "; cin >> opp;
		system ("cls");
	} while (opp=='S'||opp=='s');
	archivo_salida.close();
}

int main()
{
	system ("color f9");
	fma();
	system("pause");
	return 0;
}
