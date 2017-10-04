#include <stdio.h>

int main()
{
	float valor1, valor2, custo_f;
	int ipi, qt1, qt2;
	char *cod_1, *cod_2;
	scanf("%d", &ipi);

	printf("Peça 1\n");
	scanf("%s", &cod_1);
	scanf("%f", &valor1);
	scanf("%d", &qt1);

	printf("Peça 2\n");
	scanf("%s", &cod_2);
	scanf("%f", &valor2);
	scanf("%d", &qt2);

	custo_f = (valor1*qt1 + valor2*qt2) * ((ipi/100)+1);
	printf("R$ %.2f\n", custo_f);
}
