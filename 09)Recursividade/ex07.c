#include <stdio.h>

int m = 0;
int ordem(int n){
	if (n == m){
		printf("%d\n", n);
	}else{
		printf("%d\n", m);
		m++;
		return ordem(n);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	ordem(n);
	return 0;
}
