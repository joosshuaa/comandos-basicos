#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule
 seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58*/
int main(){
    float altura;
    float peso ;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    peso = (72.7 * altura) - 58;
    printf("Peso ideal: %.2fkg", peso);

    return 0;
}