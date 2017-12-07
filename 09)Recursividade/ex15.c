#include <stdio.h>

int padovan(int n){
	int ene = 0;
	if (n <= 2){
		ene+=1;
	}else{
		ene += padovan(n-2) + padovan(n-3);
	}
return ene;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("padovan = %d\n", padovan(n));
	return 0;
}