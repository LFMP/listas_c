#include <stdio.h>

int main(){
	int cont = 0;
	int matriz[3][3];
	int matriz2[3][3];

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	for (int a = 0; a < 3; ++a){
		for (int b = 0; b < 3; ++b){
			printf("elemento [%d][%d]: ", a,b);
			scanf("%d", &matriz2[a][b]);
		}
	}

	for (int k = 0; k < 3; ++k){
		for (int l = 0; l < 3; ++l){
			if (matriz[k][l] == matriz2[l][k]){
				cont++;
			}
		}
	}

	if (cont == 9){
		printf("Matriz A é a transposta de B\n");
	}else{
		printf("Matriz A não é a transposta de B\n");
	}

	return 0;
}