#include <stdio.h>
/*Faça um Programa que peça as 4 notas bimestrais e mostre a média*/

int main(){
    float nota_1Bimestre;
    float nota_2Bimestre;
    float nota_3Bimestre;
    float nota_4Bimestre;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1Bimestre);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2Bimestre);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota_3Bimestre);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &nota_4Bimestre);


    printf("media: %1.2f", (nota_1Bimestre + nota_2Bimestre + nota_3Bimestre + nota_4Bimestre)/4 );






    return 0;
}