#include <stdio.h>
/*Faça um Programa que converta metros para centímetros.*/
int main(){
    float metros ;
    float centimetros ;


    printf("Digite a quantidade de metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;
    printf("A conversao e igual a: %1.0f centimetros.\n\n", centimetros);






    return 0;
}