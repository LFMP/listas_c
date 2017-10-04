#include <stdio.h>

int main()
{
	int a, b, i;
	printf("Ex4 - a\n");
	for (i = 0; i < 4; ++i){
		scanf("%d %d", &a, &b);
		printf("Resposta: %i\n", (a != b));
	}
	printf("Ex4 - b\n");
	for (i = 0; i < 4; ++i){
		scanf("%d %d", &a, &b);
		printf("Resposta: %i\n", !(a == !(b)));
	}
	printf("Ex4 - c\n");
	for (i = 0; i < 4; ++i){
		scanf("%d %d", &a, &b);
		printf("Resposta: %i\n", !(a) && !(b));
	}
}
