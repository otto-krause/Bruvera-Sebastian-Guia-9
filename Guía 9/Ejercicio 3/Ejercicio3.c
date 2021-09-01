#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a=0, b=0;
	printf("Ingrese el numero inicial y el final:\n");
	scanf("%d %d", &a, &b);
	while(a<=b)
	{
		printf("%d\t", a);
		a++;
	}
	return 0;
}

