#include <stdio.h>
/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
 Calcule e mostre o total do seu salário no referido mês.*/

int main(){
    float ganho_em_horas;
    float horas_trabalhadas;
    float salario;
     printf("Quanto voce ganha por hora: ");
     scanf("%f", &ganho_em_horas);

     printf("Qual o numeros de horas trabalhadas: ");
     scanf("%f", &horas_trabalhadas);


     salario = ganho_em_horas * horas_trabalhadas;
     printf("Total do salario e: R$%1.0f", salario);





    return 0;
}