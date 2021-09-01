#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double a=0, b=0, c=0, d=0, e=0;
	int i=1, k=1;
	while(i<=30)
	{
		printf("Ingrese las notas del alumno numero %d:\n", i);
		while(k<=10)
		{
			scanf("%lf", &a);
			b=b+a;
			k++;
		}
		k=k-k;
		c= (double) b/10;
		d=d+c;
		i++;
	}
	e= (double) d/30;
	printf("El promedio general del curso es de %g\n", e);
	return 0;
}

