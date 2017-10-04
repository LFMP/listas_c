#include <stdio.h>

int main()
{
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("Valor do rendimento: %.2f\n", (x*y));
	printf("Valor total depois do rendimento: %.2f\n", (x + (x*y)));
}
