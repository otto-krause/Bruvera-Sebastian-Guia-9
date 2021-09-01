#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double a=0;
	int b=0, c=0, d=0, i=1;
	printf("Ingrese el sueldo de 20 trabajadores:\n");
	while(i<=20)
	{
		scanf("%lf", &a);
		if(a<2000)
		{
			b=b+1+(a-a);
		}
		else if(a>2000)
		{
			c=c+1+(a-a);
		}
		else
		{
			d=d+1+(a-a);
		}
		i++;
	}
	printf("%d personas ganan menos de $2000 y %d ganan mas de $2000\n", b, c);
	return 0;
}

