#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, raiz, s1, s2, delta;
	scanf("%f %f %f", &a, &b, &c);

	delta = pow(b,2) - 4*a*c;
	raiz = sqrt(delta);

	if (delta > 0){
		s1 = (-b + raiz)/(2 * a);
		s2 = (-b - raiz)/(2 * a);
		printf("Soluções %f e %f\n", s1, s2);
	}else if(delta == 0){
		s1 = -b/(2 * a);
		printf("Solução %f\n", s1);
	}else if(delta < 0){
		printf("Equação não possui raiz real\n");
	}
	return 0;
}