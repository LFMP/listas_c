#include <stdio.h>
int main () {
    int k=0;
    char frase[200];
    int car;
    FILE *arq;
    arq = fopen("text.txt","w");
    while(car!=0){
        printf("Digite a frase,digite 0 caso queira parar:");
        scanf("%[^\n]s",frase);
        fprintf(arq,"%s",frase);
        scanf("%d",&car);
        k++;
    }
    fclose(arq);
    printf("Quantidade de linhas:%d",k-1);
}
