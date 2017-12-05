#include <stdio.h>

int ordem(int n){
	if (n > 0){
		printf("%d\n", n);
		ordem(n-2);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	ordem(n);
	return 0;
}