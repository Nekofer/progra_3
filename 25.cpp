#include <stdio.h>
#include <conio.h>
#define M 3
#define N 3

int main()
{
	int x[3][3], y[3];
	int f=0, c=0;
	for (f=0; f<M; f++)
	{
		for (c=0; c<N; c++)
		{
			printf("*(x+%d)+%d)=", f,c);
			scanf("%d",*(x+f)+c);
		}
		printf("Elementos %d del vector:\n", f);
		scanf ("%d", &y[f]);
	}
	printf("IMPRESIONES:\n");
	printf("*** MATRIZ ***\n");
	for (f=0; f<M; f++)
		for (c=0; c<N; c++)
			printf("%d", *(*(x+f)+c));
	printf("\n*** VECTOR ***\n");
	for (f=0; f<M; f++)
		printf("%d", *(y+f));
	getch();
	return 0;
}
