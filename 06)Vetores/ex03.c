#include <stdio.h>

int main(){
	int vet1[20], vet2[20];
	for (int i = 0; i < 20; ++i){
		scanf("%d", &vet1[i]);
	}
	for (int b = 0; b < 20; ++b){
		scanf("%d", &vet2[b]);
	}
	for (int k = 0; k < 20; ++k){
		if (vet1[k] == vet2[k]){
			printf("Posição = %d , Elemento comum = %d\n", k, vet1[k]);
		}
	}
	return 0;
}