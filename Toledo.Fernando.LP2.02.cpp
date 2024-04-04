// Fernando Toledo - UQI - 10/09/2019 - Programa que muestra numeros aleatorios, el mayor, menor, y el promedio

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system ("color f9");
	int nums[200];
	int i=0, mayor=0, menor=999, acum=0, two=200;
	srand(time(NULL));
	for(i=0; i<=200; i++)
	{
		nums[i]= 100+rand()%(1000-100);
		if (nums[i]>mayor)
		{
			mayor=nums[i];
		}
		if (nums[i]<menor)
		{
			menor=nums[i];
		}
		cout << nums[i] << endl;
		acum+=nums[i];
	}
	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	cout << "El promedio general es: " << acum/two << endl;
	system("pause");
	return 0;
}
