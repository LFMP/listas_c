#include <stdio.h>

int main(){
	int maior = 0, linha = 0, menor;
	int matriz[5][5];

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
				linha = i;
			}
		}
	}
	menor = maior;
	for (int k = 0; k < 5; ++k){
		if (matriz[linha][k] < menor){
			menor = matriz[linha][k];
		}
	}
	printf("%d\n", menor);
	return 0;
}