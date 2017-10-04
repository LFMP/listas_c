#include <stdio.h>

int main(){
    float altura, peso;
    scanf("%f %f", &altura, &peso);

    if (peso <= 60){
        if (altura < 1.20){
            printf("A\n");
        }else if (altura >= 1.20 && altura <= 1.70){
            printf("B\n");
        }else if (altura > 1.70){
            printf("C\n");
        }
    }else if (peso > 60 && peso <= 90){
        if (altura < 1.20){
            printf("D\n");
        }else if (altura >= 1.20 && altura <= 1.70){
            printf("E\n");
        }else if (altura > 1.70){
            printf("F\n");
        }
    }else if (peso > 90){
        if (altura < 1.20){
            printf("G\n");
        }else if (altura >= 1.20 && altura <= 1.70){
            printf("H\n");
        }else if (altura > 1.70){
            printf("I\n");
        }
    }
    return 0;
}