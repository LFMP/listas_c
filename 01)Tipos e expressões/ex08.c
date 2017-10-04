#include <stdio.h>

int main()
{
	float x, y, z;
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);

	printf("Média aritimética entre os três valores: %.2f\n", ((x+y+z)/3));
}