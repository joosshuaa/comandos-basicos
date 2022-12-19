#include <stdio.h>
/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
 o produto do dobro do primeiro com metade do segundo. a soma do triplo do 
 primeiro com o terceiro. o terceiro elevado ao cubo.*/
int main(){
    int primeiro_numero;
    int segundo_numero;
    float numero_real;
    float p1, p2, p3;


    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &primeiro_numero);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &segundo_numero);

    printf("Digite um numero real: ");
    scanf("%f", &numero_real);

    p1 = (2 * primeiro_numero) * (segundo_numero/2);
    p2 = (3 * primeiro_numero) + numero_real;
    p3 = numero_real * numero_real * numero_real;

    printf("\nO dobro do primeiro com metade do segundo: %.2f", p1);
    printf("\nA soma do triplo do primeiro com o terceiro: %.2f", p2);
    printf("\nO terceiro elevado ao cubo: %.2f", p3);




    return 0;
}