#include <stdio.h>

int tetra(int n){
	int ene = 0;
	if (n <= 3){
		ene+=0;
	}else if(n == 4 || n== 5){
		ene += 1;
	}else{
		ene += tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);
	}
return ene;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("tetra = %d\n", tetra(n));
	return 0;
}