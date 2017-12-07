#include <stdio.h>

int catalan(int n){
	int ene = 0;
	if (n == 0){
		ene+=1;
	}
	if(n >= 0){
		ene += ((4*n - 2)*catalan(n-1)/(n+1));
	}
return ene;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("catalan = %d\n", catalan(n));
	return 0;
}