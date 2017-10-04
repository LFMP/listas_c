#include <stdio.h>

int main(){
    int cod;
    float sal, n_sal, aum;
    //menu
    printf("Selecione o cargo do funcionário\n");
    printf("[1] Escrituário\n");
    printf("[2] Secretário\n");
    printf("[3] Caixa\n");
    printf("[4] Gerente\n");
    printf("[5] Diretor\n");
    scanf("%d", &cod);

    switch (cod){
        case 1:
            printf("Escrituário selecionado\n");
            scanf("%f", &sal);
            aum = sal * 0.5;
            n_sal = sal + aum;
            printf("Salario: %.2f Aumeto: %.2f  Novo Salario: %.2f\n", sal, aum, n_sal);
        break;
        case 2:
            printf("Secretário selecionado\n");
            scanf("%f", &sal);
            aum = sal * 0.35;
            n_sal = sal + aum;
            printf("Salario: %.2f Aumeto: %.2f  Novo Salario: %.2f\n", sal, aum, n_sal);
        break;
        case 3:
            printf("Caixa selecionado\n");
            scanf("%f", &sal);
            aum = sal * 0.2;
            n_sal = sal + aum;
            printf("Salario: %.2f Aumeto: %.2f  Novo Salario: %.2f\n", sal, aum, n_sal);
        break;
        case 4:
            printf("Gerente selecionado\n");
            scanf("%f", &sal);
            aum = sal * 0.1;
            n_sal = sal + aum;
            printf("Salario: %.2f Aumeto: %.2f  Novo Salario: %.2f\n", sal, aum, n_sal);
        break;
        case 5:
            printf("Diretor selecionado\n");
            scanf("%f", &sal);
            aum = sal * 0;
            n_sal = sal + aum;
            printf("Salario: %.2f Aumeto: %.2f  Novo Salario: %.2f\n", sal, aum, n_sal);
        break;
    }

    return 0;
}