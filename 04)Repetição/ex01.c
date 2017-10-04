#include <stdio.h>

int main(){
	int a, b, cont = 0;
	float media;
	scanf("%d %d", &a, &b);

	if (a > b){
		media = (a + b)/2;
		printf("Média: %f\n", media);
	}else if (a < b){
		if (a % 2 == 0){
			cont += 1;
		}
		if (b%2 == 0){
			cont += 1;
		}
		printf("Qtd de números pares: %d\n", cont);
	}else if (a == b){
		printf("Numeros iguais\n");
	}
	return 0;
}