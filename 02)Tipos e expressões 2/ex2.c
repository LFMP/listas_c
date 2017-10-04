#include <stdio.h>

/*	Não, como a divisão tem prioridade sobre a multiplicação
	ocorre divergência de valores, visto que, no segundo exemplo há
	a utilização de parenteses, que por sua vez tem prioridade
	sobre a divisão.
*/
int main()
{
	int b, a;
	float raiz1, raiz2;
	scanf("%d %d", &b, &a);

	raiz1 = -b / 2*a;
	raiz2 = -b / (2*a);
	printf("%f\n", raiz1);
	printf("%f\n", raiz2);
}
