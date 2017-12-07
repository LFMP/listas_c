#include <stdio.h>

int pell(int n){
	int ene = 0;
	if (n == 0){
		ene+=0;
	}else if(n == 1){
		ene += 1;
	}else if(n >= 2){
		ene += 2*pell(n-1) + pell(n-2);
	}
return ene;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("pell = %d\n", pell(n));
	return 0;
}