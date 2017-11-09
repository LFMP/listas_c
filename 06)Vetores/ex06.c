#include <stdio.h>
#include <string.h>

int main(){
	int vogal=0;
	char palavrao[50];
	scanf("%s", palavrao);
	for (int i = 0; i <= strlen(palavrao); ++i){
		if (palavrao[i] == 'a' || palavrao[i] == 'e' || palavrao[i] == 'i' || palavrao[i] == 'o' || palavrao[i] == 'u'){
			vogal++;
		}
	}
	printf("Qtd vogais: %d\n", vogal);
	return 0;
}