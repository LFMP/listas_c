#include <stdio.h>
#include <math.h>

int delta(int a, int b, int c){
	int del;
	del = pow(b,2) - 4*a*c;
	return del;
}

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", delta(a,b,c));
	return 0;
}