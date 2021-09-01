#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a=0, b=0, c=0, d=0, i=1, k=0;
	while(i<=20)
	{
		printf("Ingrese las unidades vendidas del vendedor numero %d:\n", i);
		while(k<15)
		{
			scanf("%d", &a);
			b=b+a;
			if(b>c)
			{
				c=b;
			}
			k++;
		}
		k=k-k;
		d=d+b;
		printf("Este vendedor tiene %d unidades vendidas en total\n", b);
		b=b-b;
		i++;
	}
	printf("El vendedor con mas unidades vendidas es de %d y el total general es %d", c, d);
	return 0;
}

