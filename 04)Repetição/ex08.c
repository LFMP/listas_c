#include <stdio.h>

int main() {

	int n_consumidor=1, tipo_cons;
	float custo_t, Kwh, contador_1=0, contador_2=0, total_1=0, total_2=0, total_3=0, media_1, media_2;

	printf("[1] Residencial\n");
	printf("[2] Comercial\n");
	printf("[3] Industrial\n");
	printf("[0] Sair\n");

	while(n_consumidor!=0){

		printf("Digite o tipo de consumidor: ");
		scanf("%d", &tipo_cons);
		printf("Digite o número do consumidor: ");
		scanf("%d", &n_consumidor);
		printf("Digite a quantidade de Kwh consumidos: ");
		scanf("%f", &Kwh);
	
		if(tipo_cons==1){
			custo_t = Kwh*0.5;
			total_1 += Kwh;
			printf("O custo total do consumidor %d é R$ %.2f\n", n_consumidor, custo_t);
			contador_1++;
			
		} else if(tipo_cons==2){
			custo_t = Kwh*0.7;
			total_2 += Kwh;
			printf("O custo total do consumidor %d é R$ %.2f\n", n_consumidor, custo_t);
			contador_2++;
			
		} else if(tipo_cons==3){
			custo_t = Kwh*1.2;
			total_3 += Kwh;
			printf("O custo total do consumidor %d é R$ %.2f\n", n_consumidor, custo_t);
		}
	}

	media_1 = total_1/contador_1;
	media_2 = total_2/contador_2;

	printf("O consumo total do tipo Residencial(1) foi %.2f Kwh \n", total_1);
	printf("O consumo total do tipo Comercial(2) foi %.2f Kwh \n", total_2);
	printf("O consumo total do tipo Industrial(3) foi %.2f Kwh \n", total_3);
	printf("A média de consumo dos tipos 1 e 2 foi %.2f Kwh e %.2f Kwh, respectivamente.\n", media_1, media_2);

	return 0;
}