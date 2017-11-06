#include <stdio.h>

int main(){
	float vet1[12];
	for (int i = 0; i < 12; ++i){
		scanf("%f", &vet1[i]);
	}
	for (int b = 0; b < 12; ++b){
		printf("Mes %d = %.2f\n", b+1, vet1[b]);
	}
	float maior = vet1[0], menor = vet1[0];
	int maiorm = 0, menorm = 0;
	for (int k = 0; k < 12; ++k){
		if (vet1[k] >= maior){
			maior = vet1[k];
			maiorm = k;
		}
		if (vet1[k] <= menor){
			menor = vet1[k];
			menorm = k;
		}
	}
	printf("Maior temperatura %.2f ºC no mes %d\n", maior, maiorm + 1);
	printf("Menor temperatura %.2f ºC no mes %d\n", menor, menorm + 1);

	return 0;
}