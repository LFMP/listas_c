#include <stdio.h>
#include <math.h>

int main(){
	int	ions;
	double ph;
	scanf("%d", &ions);
	ph = ceil(log10(ions));

	printf("%lf\n", ph);

	if (ph > 7){
		printf("Solucao basica\n");
	}else if (ph == 7){
		printf("Solucao neutra\n");
	}else if (ph < 7){
		printf("Solucao acida\n");
	}

	return 0;
}
