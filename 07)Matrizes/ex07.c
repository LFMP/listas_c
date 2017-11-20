#include <stdio.h>

float diag(int matriz[5][5]){
	float cont =0;
	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			if (i>j){
				cont += matriz[i][j];
			}
		}
	}
return cont/10;
}

int main(){

	int matriz[5][5];

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("Média: %.2f\n", diag(matriz));
	return 0;
}