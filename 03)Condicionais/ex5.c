#include <stdio.h>

int main(){
	int a, b, c;
	float m;
	scanf("%i %i %i", &a, &b, &c);

	m = a+b+c/3;
	if (m > 10){
		printf("100\n");
	}
	printf("Programa encerrado\n");
	return 0;
}

/*
Entrada: a = 1; b = 13 e c = 15
Saída: "100"
*/