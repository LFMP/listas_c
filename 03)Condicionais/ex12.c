#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, area, s, ope, lado1, lado2, lado3;
	scanf("%f %f %f", &a, &b, &c);

	lado3 = a;
	if (b > lado3){
		lado3 = b;
	}
	if (c > lado3){
		lado3 = c;
	}

	if (lado3 == a){
		if (b > c){
			lado2 = b;
			lado1 = c;
		}else{
			lado2 = c;
			lado1 = b;
		}
	}else if(lado3 == b){
		if (a > c){
			lado2 = a;
			lado1 = c;
		}else{
			lado2 = c;
			lado1 = a;
		}
	}else if(lado3 == c){
		if (a > b){
			lado2 = a;
			lado1 = b;
		}else{
			lado2 = b;
			lado1 = a;
		}
	}

	if (lado3 > lado1 + lado2 || a + b + c <= 0){
		printf("Não é um triangulo\n");
	}else if (a + b + c > 0){
		s = (a+b+c)/2;
		ope = s*(s-a)*(s-b)*(s-c);

		if (ope >= 0){
			area = sqrt(ope);
			printf("%f\n", area);
		}else{
		printf("Raiz não real\n");
		}
	}
	return 0;
}
