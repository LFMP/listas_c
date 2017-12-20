#include <stdio.h>
int main ()
{
    char car;
    int k=0;
    FILE *arq;
    arq = fopen("arq.txt","w");
    do
    {
        printf("Digite caracter:");
        scanf("%c",&car);
        getchar();
        fprintf(arq,"%c",car);
        k++;
    }
    while(car!='0');
    fclose(arq);
    arq = fopen("arq.txt","r");
    if(arq==NULL)
    {
        printf("Nao tem nada no arquivo.");
    }
    else
    {
        char cara[k];
        while(fgets(cara,k,arq)!= NULL)
        {
            printf("%s",cara);
        }

    }
}
