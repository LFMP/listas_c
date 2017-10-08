#include <stdio.h>

int main(){ 

	int a, b, a1, b1, c=0, c1=1;
	printf("Digite o valor de A e B: ");
	scanf("%d %d", &a, &b);
	a1 = a;
	b1 = b;

	while(a >= b){
		a -= b;
		c++;
	}
	printf("A dividido por B = %d\n", c);

	while(c1 < b1){
		a1 += a1;
		c1++;
	}
	printf("A multiplicado por B = %d\n", a1);
	return 0;
}