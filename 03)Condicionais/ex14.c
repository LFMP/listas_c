#include <stdio.h>

int calculaTempo(int hi, int mi, int hf, int mf){
    int temp;

    if(hi > hf){
        temp =  1440 - (hi*60 + mi);
        temp += hf*60 + mf;
    }else
        temp = (hf*60 + mf) - (hi*60 + mi);

    return temp;
}

int main(){
    int hi, mi, hf, mf, res;

    printf("Digite o horario de inicio do jogo (HH MM): ");
    scanf("%i %i", &hi, &mi);

    printf("Digite o horario de fim do jogo (HH MM): ");
    scanf("%i %i", &hf, &mf);

    res = calculaTempo(hi, mi, hf, mf);

    printf("Tempo: %d horas e %d minutos.\n", res/60, res%60);

    return 0;
}