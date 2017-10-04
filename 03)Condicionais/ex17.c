#include <stdio.h>

int main(){
    float compra, desc;
    scanf("%f", &compra);

    if (compra <= 100){
        desc = compra*0.05;
        compra -= desc;
        printf("Desconto: %.2f   Total: %.2f\n", desc, compra);
    }else if (compra > 100 && compra < 200){
        desc = compra*0.1;
        compra -= desc;
        printf("Desconto: %.2f   Total: %.2f\n", desc, compra);
    }else if (compra >= 200){
        desc = compra*0.2;
        compra -= desc;
        printf("Desconto: %.2f   Total: %.2f\n", desc, compra);
    }

    return 0;
}