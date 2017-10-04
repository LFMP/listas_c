#include <stdio.h>
#include <math.h>

int main()
{
	int A = 10, B = 3, F = 1;
	float C = 1.5, D = 0.5;
	const char *G = "algoritmo";
	const char *H = "A";

	//Exercício 7.a
	/*1º - (H != 'a'); (B*C); (G == "teste");
	  2º - 	Operações de multiplicação e adição [(B + D >= (B*C)*5*A)]
	  e a comparação (>=) dentro dos parenteses, é feita também a negação
	  em [!(G == "teste")];
	  3º - Realizada a operação OR entre (H != ’a’) e (B + D >= (B*C)*5*A),
	  realizada a operação OR entre !(G == "teste") e F;
	  4º - Realizada a operação AND entre (H != ’a’) || (B + D >= (B*C)*5*A) e !(G == "teste") || F;
	  5º - Resultado igual a "1".
	 */
	printf("%d\n", ((H != 'a') || (B + D >= (B*C)*5*A) && !(G == "teste") || F));
	//Exercício 7.b
	/*1º - (A + C); (B + C); (sqrt(B+D); !F; A/B;
	  2º - 	Operação de divisão em [(A + C) / B] e comparações em 
	  (A + C) / B >= (B + C) e (sqrt(B+D) != A/B);
	  3º - Realizada a operação OR entre F e [(A + C) / B >= (B + C)],
	  realizada a operação OR entre !F e (sqrt(B+D) != A/B);
	  4º - Realizada a operação AND entre F || ((A + C) / B >= (B + C)) e !F || (sqrt(B+D) != A/B);
	  5º - Resultado igual a "1".
	 */
	printf("%d\n", (F || ((A + C) / B >= (B + C)) && !F || (sqrt(B + D) != A/B)));
}
