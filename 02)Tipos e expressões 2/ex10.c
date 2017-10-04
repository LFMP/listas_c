#include <stdio.h>

int main()
{
	float custo_b, custo_f;
	scanf("%f", &custo_b);
	custo_f = custo_b + custo_b*0.28 + custo_b*0.45;
	printf("%f\n", custo_f);
}
