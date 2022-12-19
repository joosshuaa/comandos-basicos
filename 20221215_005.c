#include <stdio.h>
/*Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.*/
int main(){
    float medida;
    float area;
    
    printf("Digite a medida do quadrado: ");
    scanf("%f", &medida);

    area = medida * medida;
    printf("O dobro da area do quadrado e igual a: %1.0f", area * 2);

    return 0;
}