#include <stdio.h>

int cont = 0;

int X(int n, int m){
	int x;
	cont++;
	if (n == m || n == 0){
		x = 1;
	}else{
		x = X(n-1, m) + X(n-1, m+1);
	}
return x;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("x = %d\n", X(n,m));
	printf("Contador: %d\n", cont);
	return 0;
}