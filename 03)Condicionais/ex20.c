#include <stdio.h>

int main(){
	float a, b, c, maior, menor;

	scanf("%f %f %f", &a, &b, &c);

	maior = a;
	if (b > maior){
		maior = b;
	}
	if (c > maior){
		maior = c;
	}
	menor = a;
	if (b < menor){
		menor = b;
	}
	if (c < menor){
		menor = c;
	}

	printf("Maior valor: %f\n", maior);
	printf("Menor valor: %f\n", menor);
	return 0;
}