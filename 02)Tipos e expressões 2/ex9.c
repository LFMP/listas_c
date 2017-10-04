#include <stdio.h>
#include <math.h>

int main()
{
	float b, a, h, per, area;
	scanf("%f %f", &b, &a);
	h = sqrt(pow(b,2)+pow(a,2));
	per = b + a + h;
	area = (b*a)/2;

	printf("Perímetro: %f  Área: %f  Diagonal: %f\n", per, area, h);
}
