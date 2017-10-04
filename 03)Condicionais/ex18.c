#include <stdio.h>

int main(){
    float vhora, qhora, vhoraplus, qhoraplus, bruto;
    scanf("%f %f", &qhora, &vhora);

    
    if (qhora > 40){
        qhoraplus = qhora - 40;
        vhoraplus = qhoraplus*0.5;
        bruto = (vhora*40)+vhoraplus;
        printf("Salario semanal: %.2f - Salario extra: %.2f - Salario bruto: %.2f\n", vhora*40, vhoraplus, bruto);
    }else if (qhora == 40){
        printf("Parabéns, você não é um escravo!\n");
        printf("Salario semanal: %.2f\n", vhora*40);
    }else if(qhora < 40){
        printf("Parece que alguém andou trabalhando menos\n");
        printf("Salario semanal: %.2f\n", vhora*40);
    }
    return 0;
}