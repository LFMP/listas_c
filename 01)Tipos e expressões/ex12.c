#include <stdio.h>

int main()
{
	float x, s_liquido;
	scanf("%f", &x);
	s_liquido = x + x*0.05 - x*0.07;
	printf("Salário líquido: %.2f\n", s_liquido);
}
