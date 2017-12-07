#include <stdio.h>

int palindromo(char str[], int inicio, int final) {

	if (inicio >= final){
		return 1;
	}

	if (str[inicio] == ' '){
		return palindromo(str, inicio + 1, final);
	}

	if (str[final] == ' '){
		return palindromo(str, inicio, final - 1);
	}

	if (str[inicio] != str[final]){
		return 0;
	}

	return palindromo(str, inicio + 1, final - 1);
}

int main() {

	char str[50];

	printf("Digite a string: ");
	scanf("%[^\n]s", str);

	int resultado = palindromo(str, 0, strlen(str) - 1);

	if (resultado) {
		printf("A string é um palíndromo\n");
	} else {
		printf("A string não é um palíndromo\n");
	}
}