#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double a=0, c=1;
	int b=0, i=0;
	printf("Ingrese el numero base y su exponente:\n");
	scanf("%lf %d", &a, &b);
	while(i<b)
	{
		c= (double) c*a;
		i++;
	}
	printf("El resultado es %g", c);
	return 0;
}

