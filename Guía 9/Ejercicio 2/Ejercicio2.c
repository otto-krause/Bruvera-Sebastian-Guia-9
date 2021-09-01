#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double a=0, b=0, c=0;
	int i=0;
	printf("Ingrese 15 numeros:\n");
	while(i<15)
	{
		scanf("%lf", &b);
		a=a+b;
		if(b>c)
		{
			c=b;
		}
		i++;
	}
	printf("La suma de todos los numeros es %g y el mayor es %g\n", a, c);
	return 0;
}

