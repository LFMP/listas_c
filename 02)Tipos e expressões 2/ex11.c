#include <stdio.h>
#include <math.h>

int main()
{
	float r, area, per;
	scanf("%f", &r);

	area = M_PI * pow(r,2);
	per = M_PI * 2 * r;
	printf("Área: %f  Perímetro: %f\n", area, per);
}
