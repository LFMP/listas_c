#include <stdio.h>

int main(){
    float vhora, qhora, vhoraplus, qhoraplus, bruto, inss, sind, descontos, ir;
    scanf("%f %f", &qhora, &vhora);

    if (qhora > 40){
        //vantagem
        qhoraplus = qhora - 40;
        vhoraplus = qhoraplus*0.5;
        bruto = (vhora*40*4) + vhoraplus;
    }else{
        //vantagem
        vhoraplus = qhoraplus*0;
        bruto = vhora*40*4;
    }
    if (bruto <= 1787.77){
        ir = bruto*0;
    }else if (bruto > 1787.78 && bruto <= 2679.29){
        ir = bruto*0.075;
    }else if (bruto > 2679.29 && bruto <= 3572.43){
        ir = bruto*0.15;
    }else if (bruto > 3572.43 && bruto <= 4463.81){
        ir = bruto*0.225;
    }else if (bruto > 4463.81){
        ir = bruto*0.275;
    }
    //desconto
    inss = bruto*0.11;
    sind = bruto*0.08;
    descontos = inss + sind + ir;
    printf("Salario extra: %.2f - Salario bruto: %.2f\n", vhoraplus, bruto);
    printf("Inss: %.2f - Sindicato: %.2f - IR: %.2f - Total: %.2f\n", inss, sind, ir, descontos);
    printf("Salario liquido mensal: %.2f\n", (bruto-descontos));
    printf("Salario liquido semanal: %.2f\n", (bruto-descontos)/4);
    return 0;
}