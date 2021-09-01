#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a=0, b=1, c=0, i=1;
	printf("Ingrese el numero del que quiere sacar su factorial:\n");
	scanf("%d", &a);
	while(i<=a)
	{
		c=b*i;
		b=c;
		i++;
	}
	printf("El factorial de %d es %d\n", a, c);
	return 0;
}

