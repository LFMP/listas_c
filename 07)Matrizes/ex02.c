#include <stdio.h>

int main(){
	int m,n, det;

	int matriz[2][2];

	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	det = (matriz[0][0]*matriz[1][1]) - (matriz[0][1]*matriz[1][0]);

	printf("\nDeterminate: %d\n", det); 
	return 0;
}