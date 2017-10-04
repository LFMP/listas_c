#include <stdio.h>

int main()
{
	float a, b, c, d;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);

	printf("Média ponderada entre os quatro valores: %.2f\n", ((2*a+2*b+3*c+3*d)/10));
}