#include <stdio.h>

int fatdouble(int n){
	if (n == 1){
		return 1;
	}
return n * fatdouble(n-2);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", fatdouble(n));
	return 0;
}