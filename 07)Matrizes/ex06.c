#include <stdio.h>

int main(){

	int matriz[6][6], maior;

	for (int k = 0; k < 6; ++k){
		for (int l = 0; l < 6; ++l){
			matriz[k][l] = 0;
		}
	}
	maior = matriz[0][0];

	for (int i = 0; i < 6; ++i){
		for (int j = 0; j < 6; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] > maior && i == j){
				maior = matriz[i][j];
			}
		}
	}
	printf("%d\n", maior);
	return 0;
}