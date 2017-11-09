#include <stdio.h>

int main(){

	int vetorzao[5], maior=0, menor=10000, npares=0;
	float svet=0;

	for (int i = 0; i < 5; ++i){
		scanf("%d", &vetorzao[i]);
		if (vetorzao[i]>maior){
			maior = vetorzao[i];
		}
		if (vetorzao[i]<menor){
			menor = vetorzao[i];
		}
		if (vetorzao[i] % 2 == 0){
			npares++;
		}
		svet += vetorzao[i];
	}
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Pares: %d%c\n", npares,'%');
	printf("Media: %.2f\n", svet/5.0);

	return 0;
}