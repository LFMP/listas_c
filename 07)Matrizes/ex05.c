#include <stdio.h>

int main(){
	int cont=0;

	int matriz[5][5];

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j]==0 && i>j){
				cont++;
			}
		}
	}

	if (cont == 10){
		printf("Matriz triangular superior\n");
	}else{
		printf("Matriz não triangular superior\n");
	}
	return 0;
}