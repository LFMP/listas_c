#include <stdio.h>
#include <math.h>

void delta(int a, int b, int c){
	int del;
	del = pow(b,2) - 4*a*c;
	if(del == 0){
		printf("Raiz: %.2f\n", -b/(2*a));
	}else if (del > 0){
		printf("Raiz 1: %.2f\n", (-b + sqrt(del))/(2*a));
		printf("Raiz 2: %.2f\n", (-b - sqrt(del))/(2*a));
	}else if (del < 0){
		printf("%d\n", -b);
		printf("Raiz 1: %.2f + i*%.2f\n", -b/(2*a), sqrt(-del)/(2*a));
		printf("Raiz 2: %.2f - i*%.2f\n", -b/(2*a), sqrt(-del)/(2*a));
	}	
}

int main(){
	int a, b, c, res;
	scanf("%d %d %d", &a, &b, &c);
	delta(a,b,c);
	return 0;
}