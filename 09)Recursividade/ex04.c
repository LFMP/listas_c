#include <stdio.h>

int fibo(int n){
	int ene = 0;
	if (n == 2 || n == 3){
		ene+=1;
	}else if(n == 0 || n== 1){
		ene += 0;
	}else{
		ene += fibo(n-1) + fibo(n-2);
	}
return ene;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("Fibo = %d\n", fibo(n));
	return 0;
}