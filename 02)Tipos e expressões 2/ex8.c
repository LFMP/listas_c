#include <stdio.h>

int main()
{
	int segin, segout, min, hora;
	scanf("%i", &segin);

	hora = segin / 3600;
	min = (segin - (hora*3600))/60;
	segout = (segin - (hora*3600)) - (min*60);
	printf("%d hora(s) %d minuto(s) %d segundo(s)\n", hora, min, segout);
}
