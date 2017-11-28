#include <stdio.h>

int cont = 0;
int x=0;

int X(int n){
	cont++;
	if (n >= 0 && n <= 2){
		x = n;
	}else{
		x = X(n-1) + X(n-2) + X(n-3);
	}
return x;
}

int main(){
	int n, m;
	scanf("%d", &n);
	printf("x = %d\n", X(n));
	printf("Contador: %d\n", cont);
	return 0;
}