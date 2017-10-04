#include<stdio.h>

int main() {
	float salario, com, bruto, inss, ir, total_desc, liq;
	int qtd, pol;
	printf("Digite o salário fixo do funcionário:\n");
	scanf("%f", &salario);
	printf("Digite a quantidade de aparelhos vendidos e o tamanho deles, em polegadas:\n");
	scanf("%i %i", &qtd, &pol);

	if(pol>42){
		com = 170*qtd;
		bruto = salario + com;
		if(bruto>1787.77){
			if(bruto>=1787.78 && bruto<=2679.29){
				inss = bruto*0.1;
				ir = bruto*0.075;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=2679.3 && bruto<=3572.43){
				inss = bruto*0.1;
				ir = bruto*0.15;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=3572.44 && bruto<=4463.81){
				inss = bruto*0.1;
				ir = bruto*0.225;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>4463.81){
				inss = bruto*0.1;
				ir = bruto*0.275;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
		}else{
			inss = bruto*0.1;
			liq = bruto - inss;
			printf("A comissão do funcionário é R$%i\n", com);
			printf("O salário bruto do funcionário é R$%f\n", bruto);
			printf("Os descontos são:\n  INSS: R$%f\n", inss);
			printf("O total de descontos é R$%f\n", inss);
			printf("O salário líquido do funcionário é R$%f\n", liq);
	    }
	}

	if(pol==42 && qtd<=10){
		com = qtd*100;
		bruto = salario + com;
		if(bruto>1787.77){
			if(bruto>=1787.78 && bruto<=2679.29){
				inss = bruto*0.1;
				ir = bruto*0.075;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=2679.3 && bruto<=3572.43){
				inss = bruto*0.1;
				ir = bruto*0.15;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=3572.44 && bruto<=4463.81){
				inss = bruto*0.1;
				ir = bruto*0.225;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>4463.81){
				inss = bruto*0.1;
				ir = bruto*0.275;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}

		}else{
			inss = bruto*0.1;
			liq = bruto - inss;
			printf("A comissão do funcionário é R$%i\n", com);
			printf("O salário bruto do funcionário é R$%f\n", bruto);
			printf("Os descontos são:\n  INSS: R$%f\n", inss);
			printf("O total de descontos é R$%f\n", inss);
			printf("O salário líquido do funcionário é R$%f\n", liq);
		}
	}	

	if(pol==42 && qtd>10){
		com = qtd*150;
		bruto = salario + com;
		if(bruto>1787.77){
			if(bruto>=1787.78 && bruto<=2679.29){
				inss = bruto*0.1;
				ir = bruto*0.075;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=2679.3 && bruto<=3572.43){
				inss = bruto*0.1;
				ir = bruto*0.15;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=3572.44 && bruto<=4463.81){
				inss = bruto*0.1;
				ir = bruto*0.225;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>4463.81){
				inss = bruto*0.1;
				ir = bruto*0.275;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}	

		}else{
			inss = bruto*0.1;
			liq = bruto - inss;
			printf("A comissão do funcionário é R$%i\n", com);
			printf("O salário bruto do funcionário é R$%f\n", bruto);
			printf("Os descontos são:\n  INSS: R$%f\n", inss);
			printf("O total de descontos é R$%f\n", inss);
			printf("O salário líquido do funcionário é R$%f\n", liq);
		}
	}	

	if(pol<=40 && qtd<=20){
		com = qtd*50;
		bruto = salario + com;
		if(bruto>1787.77){
			if(bruto>=1787.78 && bruto<=2679.29){
				inss = bruto*0.1;
				ir = bruto*0.075;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=2679.3 && bruto<=3572.43){
				inss = bruto*0.1;
				ir = bruto*0.15;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=3572.44 && bruto<=4463.81){
				inss = bruto*0.1;
				ir = bruto*0.225;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>4463.81){
				inss = bruto*0.1;
				ir = bruto*0.275;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
		}else{
			inss = bruto*0.1;
			liq = bruto - inss;
			printf("A comissão do funcionário é R$%i\n", com);
			printf("O salário bruto do funcionário é R$%f\n", bruto);
			printf("Os descontos são:\n  INSS: R$%f\n", inss);
			printf("O total de descontos é R$%f\n", inss);
			printf("O salário líquido do funcionário é R$%f\n", liq);
		}
	}
		
	if(pol<=40 && qtd>20){
		com = qtd*120;
		bruto = salario + com;
		if(bruto>1787.77){
			if(bruto>=1787.78 && bruto<=2679.29){
				inss = bruto*0.1;
				ir = bruto*0.075;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=2679.3 && bruto<=3572.43){
				inss = bruto*0.1;
				ir = bruto*0.15;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>=3572.44 && bruto<=4463.81){
				inss = bruto*0.1;
				ir = bruto*0.225;
				total_desc = inss + ir;
				liq = bruto- total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
			if(bruto>4463.81){
				inss = bruto*0.1;
				ir = bruto*0.275;
				total_desc = inss + ir;
				liq = bruto - total_desc;
				printf("A comissão do funcionário é R$%i\n", com);
				printf("O salário bruto do funcionário é R$%f\n", bruto);
				printf("Os descontos são:\n  INSS: R$%f\n IR: R$%f\n", inss, ir);
				printf("O total de descontos é R$%f\n", total_desc);
				printf("O salário líquido do funcionário é R$%f\n", liq);
			}
		}else{
			inss = bruto*0.1;
			liq = bruto - inss;
			printf("A comissão do funcionário é R$%i\n", com);
			printf("O salário bruto do funcionário é R$%f\n", bruto);
			printf("Os descontos são:\n  INSS: R$%f\n", inss);
			printf("O total de descontos é R$%f\n", inss);
			printf("O salário líquido do funcionário é R$%f\n", liq);
		}
	}
	return 0;	
}