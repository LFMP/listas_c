#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	//Simples
	printf("Dividendo: %d\n", x);
	printf("Divisor: %d\n", y);
	printf("Quociente: %d\n", (x/y));
	printf("Resto: %d\n", (x%y));

	//Sofisticado(já que tratamos de números inteiros)
	if (x => y)
	{
		printf("Dividendo: %d\n", x);
		printf("Divisor: %d\n", y);
		printf("Quociente: %d\n", (x/y));
		printf("Resto: %d\n", (x%y));
	}else{
		printf("Dividendo: %d\n", y);
		printf("Divisor: %d\n", x);
		printf("Quociente: %d\n", (y/x));
		printf("Resto: %d\n", (y%x));
	}
	
}
