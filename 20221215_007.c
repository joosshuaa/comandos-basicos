#include <stdio.h>
/*Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre 
a temperatura em graus Celsius. C = (5 * (F-32) / 9).*/

int main(){
    float graus_fahrenheit;
    float graus_celsius;
    
    printf("Qual a temperatura em farenheit: ");
    scanf("%f", &graus_fahrenheit);

    graus_celsius = (5 * (graus_fahrenheit-32) / 9);
    printf("Graus farenheit em graus celsius equivale a: %1.2f graus Celsius", graus_celsius);



    return 0;
}