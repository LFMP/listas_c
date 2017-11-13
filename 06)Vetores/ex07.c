#include <stdio.h>
#include <string.h>

int main(){
	char frase[50], palavra[10];
	int checa=0, cont=0;

	scanf("%[^\n]s", frase);
	scanf("%s", palavra);

	for (int i = 0; i < strlen(frase) - strlen(palavra)+1; i++){
		checa = 0;
		for (int j = 0; j < strlen(palavra); j++){
			if(frase[i + j] != palavra[j]){
				break;
			}
			checa++;
		}
		if (checa == strlen(palavra)){
			cont++;
		}
	}
	printf("%d\n", cont);

	return 0;
}