#include <stdio.h>

int main(){
	int m,n, detp, dets, det;

	int matriz[3][3];

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("elemento [%d][%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	detp = (matriz[0][0]*matriz[1][1]*matriz[2][2]) + (matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[0][2]*matriz[1][0]*matriz[2][1]);
	dets = (matriz[0][2]*matriz[1][1]*matriz[2][0]) + (matriz[0][0]*matriz[1][2]*matriz[2][1]) + (matriz[0][1]*matriz[1][0]*matriz[2][2]);
	det = detp - dets;
	printf("\nDeterminate: %d\n", det);
	
	return 0;
}