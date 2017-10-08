#include <stdio.h>

int main(){
	float n = 0, maior = 0;

	while(n != -9999){
		scanf("%f", &n);
		if (n > maior){
			maior = n;
		}
	}
	printf("Maior numero: %f\n", maior);
	return 0;
}