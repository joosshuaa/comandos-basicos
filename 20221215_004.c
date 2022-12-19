#include <stdio.h>
/*Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.*/

int main(){
    float raio;
    float pi = 3.14;
    float area;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio;
    printf("Area calculada e igual a: %1.2f", area);

    return 0;
}