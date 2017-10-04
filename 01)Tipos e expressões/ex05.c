#include <stdio.h>

int main()
{
	float A = 2, B = 5;
	//Exercício 5.a
	printf("%d\n", (A + B == 0 || A != 1));
	//Exercício 5.b
	printf("%d\n", (A + B == 0 && A != 1));
	//Exercício 5.c
	printf("%d\n", (A + B == 0 || A != 1));
	//Exercício 5.d
	printf("%d\n", (!A + B == 0 && A != 1));
}
