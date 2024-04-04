//Fernando Toledo - UQI - 23/09/2019 - Programa que muestra numeros ingresado a romanos

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	system ("color f9");
	int num, uni, dec, cen, mil;
	char roman[30]={""};
	cout << "Programa que muestra numeros ingresado a romanos\n\n";
	cout << "Ingrese un numero arabigo: "; cin >> num;
	uni=num%10; num/=10;
	dec=num%10; num/=10;
	cen=num%10; num/=10;
	mil=num%10; num/=10;
	switch (mil)
	{
		case 1: strcat(roman,"M"); break;
		case 2: strcat(roman,"MM"); break;
		case 3: strcat(roman,"MMM"); break;
	}
	switch (cen)
	{
		case 1: strcat(roman,"C"); break;
		case 2: strcat(roman,"CC"); break;
		case 3: strcat(roman,"CCC"); break;
		case 4: strcat(roman,"CD"); break;
		case 5: strcat(roman,"D"); break; 
		case 6: strcat(roman,"DC"); break;
		case 7: strcat(roman,"DCC"); break;
		case 8: strcat(roman,"DCCC"); break;
		case 9: strcat(roman,"CM"); break;
	}
	switch (dec)
	{
		case 1: strcat(roman,"X"); break;
		case 2: strcat(roman,"XX"); break;
		case 3: strcat(roman,"XXX"); break;
		case 4: strcat(roman,"XL"); break;
		case 5: strcat(roman,"L"); break;
		case 6: strcat(roman,"LX"); break;
		case 7: strcat(roman,"LXX"); break;
		case 8: strcat(roman,"LXXX"); break;
		case 9: strcat(roman,"XC"); break;
	}
	switch (uni)
	{
		case 1: strcat(roman,"I"); break;
		case 2: strcat(roman,"II"); break;
		case 3: strcat(roman,"III"); break;
		case 4: strcat(roman,"IV"); break;
		case 5: strcat(roman,"V"); break;
		case 6: strcat(roman,"VI"); break;
		case 7: strcat(roman,"VII"); break;
		case 8: strcat(roman,"VIII"); break;
		case 9: strcat(roman,"IX"); break;
	}
	cout << endl << "Numero romano: " << roman;
	system ("pause>nul");
	return 0;
}
