#include <stdio.h>

int mdczao(int k, int n){
	int mdc = 0;
	if (n == 0){
		mdc = k;
	}else{
		mdc = mdczao(n, k%n);
	}
return mdc;
}

int main(){
	int n, k;
	scanf("%d %d", &k, &n);
	printf("mdc = %d\n", mdczao(k,n));
	return 0;
}