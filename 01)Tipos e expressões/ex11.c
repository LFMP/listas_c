#include <stdio.h>

int main()
{
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("Valor do aumento: %.2f\n", (x*y));
	printf("Novo salário: %.2f\n", (x + (x*y)));
}
