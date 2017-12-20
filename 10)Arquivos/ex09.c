#include <stdio.h>
int main(){
    int vetor[3],joao[3],aux[3][30],aux2[3][30];
    int k,x,i=0,n,auxi;
    FILE *arq=fopen("text.txt","w");
    for(k=0;k<3;k++){
        printf("Digite o numero:");
        scanf("%d",&vetor[k]);
    }
    for(k=0;k<3;k++){
        while(vetor[k]>0){
            i++;
            aux[k][i]=vetor[k]%2;
            vetor[k]=vetor[k]/2;

        }
        joao[k]=i;
        i=0;
    }


    for(k=0;k<3;k++){
        i=joao[k];
        for(n=0;n<joao[k];n++){
                auxi=aux[k][n];
                aux[k][n]=aux[k][i];
                aux[k][i]=auxi;
                i--;
            }
        }

    for(k=0;k<3;k++){
        for(x=0;x<joao[k];x++){
            fprintf(arq,"%d",aux[k][x]);
        }
        fprintf(arq,"\n");
    }
}
