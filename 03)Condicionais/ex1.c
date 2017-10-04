#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, lado3, lado2, lado1;

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

	if (lado3 > lado1 + lado2){
		printf("Não é um triangulo\n");
	}else if(pow(lado3,2) == pow(lado1,2) + pow(lado2,2)){
		printf("triangulo retangulo\n");
	}else if(pow(lado3,2) < pow(lado1,2) + pow(lado2,2)){
		printf("triangulo acutangulo\n");
	}else if(pow(lado3,2) > pow(lado1,2) + pow(lado2,2)){
		printf("triangulo obtusangulo\n");
	}
	return 0;
}