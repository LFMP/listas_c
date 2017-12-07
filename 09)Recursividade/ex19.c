#include <stdio.h>

int soma(int n, int m){
	int ene = 0;
	if(m == 0){
		return n;
	}
return 1 + soma(n,m-1);
}

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	printf("soma = %d\n", soma(n,m));
	return 0;
}