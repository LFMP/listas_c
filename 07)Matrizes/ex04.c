#include <stdio.h>

int main(){
	int soma=0, somaprod;

	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];

	printf("\nMatriz 1\n");
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("\nMatriz 2\n");
	for (int k = 0; k < 3; ++k){
		for (int l = 0; l < 3; ++l){
			printf("elemento [%d][%d]: ", k,l);
			scanf("%d", &matriz2[k][l]);
		}
	}

	for (int c = 0; c < 3; ++c){
		for (int d = 0; d < 3; ++d){
			somaprod = 0;
			for (int e = 0; e < 3; ++e){
				somaprod += matriz1[c][e]*matriz2[e][d];
				matriz3[c][d] = somaprod;
			}
		}
	}


	printf("\nM1*M2\n");
	for (int a = 0; a < 3; ++a){
		for (int b = 0; b < 3; ++b){
			printf("%d", matriz3[a][b]);
			printf("\t");
		}
		printf("\n");
	}
	
	return 0;
}