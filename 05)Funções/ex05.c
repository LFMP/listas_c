#include <stdio.h>

float mediazona(float a, float b, float c){
	float media, maiorzao, maiorzinho;
	maiorzao = a;
	maiorzinho = a;
	if (b > a){
		maiorzao = b;
	}
	if (c > a){
		maiorzao = c;
	}
	if (b != maiorzinho && b <= maiorzao){
		maiorzinho = b;
	}
	if (c >= maiorzinho && c <= maiorzao){
		maiorzinho = c;
	}

	media = (maiorzinho + maiorzao)/2;

	return media;
}

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.2f\n", mediazona(a,b,c));
	return 0;
}