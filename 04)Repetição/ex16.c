#include <stdio.h>

int main(){

	int n_pedido=1, quantidade;
	float preco, total;
	char data[9];

	while(n_pedido != 0){

		printf("Digite o número do pedido: ");
		scanf("%d", &n_pedido);
		if (n_pedido == 0){
			break;
		}
		printf("Digite a data do pedido(dd-mm-aa): ");
		scanf("%s", data);
		printf("Digite o preço unitário: R$ ");
		scanf("%f", &preco);
		printf("Digite a quantidade ");
		scanf("%d", &quantidade);
		total = preco*quantidade;
		printf("Total: R$ %.2f\n", total);
	}

	return 0;
}