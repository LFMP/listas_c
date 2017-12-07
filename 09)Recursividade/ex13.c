#include <stdio.h>
#include <math.h>

int fat(int n){
	int gordo = 0;
	if (n == 0 || n == 1){
		gordo+=1;
	}else{
		gordo += pow(n,fat(n-1));
	}
return gordo;
}


int main(){
	int n;
	scanf("%d", &n);
	printf("Fatorial = %d\n", fat(n));
	return 0;
}