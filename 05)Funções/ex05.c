#include <stdio.h>

float mediazona(float a, float b, float c){
	float media;
	if (a<b && a<c){
		media = (b+c)/2;
	}else if(b<a && b<c){
		media = (a+c)/2;
	}else{
		media = (a+b)/2;
	}
	return media;
}

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("%.2f\n", mediazona(a,b,c));
	return 0;
}