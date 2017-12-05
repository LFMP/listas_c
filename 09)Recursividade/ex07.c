#include <stdio.h>

int ordem(int n){
	if (n > 0){
		ordem(n-1);
		printf("%d\n", n);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	ordem(n);
	return 0;
}
