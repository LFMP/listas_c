#include <stdio.h>
#include <math.h>

int main(){ 

	int n=-1;
	double raiz;

	for (int i = 0; i < 10; ++i){
		while(n < 0){
			printf("Digite um número positivo: ");
			scanf("%d", &n);
		}
		raiz = sqrt(n);
		printf("Raiz de %d é %f\n", n, raiz);
		scanf("%d", &n);
	}
	return 0;
}