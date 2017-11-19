#include <stdio.h>

int main(){
	int m,n;

	scanf("%d %d", &m, &n);

	int matriz[m][n];
	int matriz2[n][m];

	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
			matriz2[j][i] = matriz[i][j];
		}
	}

	printf("\nMATRIZ ORIGINAL\n\n");

	for (int a = 0; a < m; ++a){
		for (int b = 0; b < n; ++b){
			printf("%d", matriz[a][b]);
			printf("\t");
		}
		printf("\n");
	}

	printf("\nMATRIZ TRANSPOSTA\n\n");
	for (int k = 0; k < n; ++k){
		for (int l = 0; l < m; ++l){
			printf("%d", matriz2[k][l]);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}