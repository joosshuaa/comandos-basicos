#include <stdio.h>
/*Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.*/

int main(){
    float graus_Celsius;
    float graus_Fahrenheit;

    printf("Qual a temperatura em graus Celsius: ");
    scanf("%f", &graus_Celsius);

    graus_Fahrenheit = (graus_Celsius * 9/5) + 32;
    printf("Graus Celsius em graus fahrenheit equivale a: %1.0f graus fahrenheit", graus_Fahrenheit);

    return 0;
}