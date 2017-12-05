#include <stdio.h>

int multi(int k, int n){
	int soma = 0;
	if (k == 0 || n == 0){
		soma += 0;
	}else{
		soma += k + multi(k, n-1);
	}
return soma;
}

int main(){
	int n, k;
	scanf("%d %d", &k, &n);
	printf("multiplicação = %d\n", multi(k,n));
	return 0;
}