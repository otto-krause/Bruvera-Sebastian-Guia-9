#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double a=0;
	int b=0, c=0, d=0, e=0, i=1;
	printf("Ingrese 10 numeros:\n");
	while(i<=10)
	{
		scanf("%lf", &a);
		if(a<b)
		{
			c=c+1+(a-a);
		}
		else if(a==b)
		{
			d=d+1+(a-a);
		}
		else
		{
			e=e+1+(a-a);
		}
		i++;
	}
	printf("Hay %d numeros negativos, %d numeros iguales a 0 y %d numeros positivos\n", c, d, e);
	return 0;
}

