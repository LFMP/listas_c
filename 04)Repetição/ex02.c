#include <stdio.h>

int main(){
	int i, x = 0, n= 0;

	do{
		printf("Digite um número > 1: ");
		scanf("%d", &x);
	}while(x <= 0);

	for (i = 1; i <= x; ++i){
		if (x % i == 0){
			n++;
		}
	}
	if (n == 2){
		printf("O número %d é primo.\n", x);
	}else{
		printf("O núemro %d não é primo\n", x);
	}
	return 0;
}