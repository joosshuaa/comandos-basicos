#include <stdio.h>
#include <stdlib.h>
/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas 
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
 sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% 
 para o sindicato, faça um programa que nos dê:
salário bruto.
Quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido (Salário Líquido = Salário Bruto - Descontos)*/
int main(){
    float ganho_em_horas;
    float horas_trabalhadas;
    float salario;
    float imposto_de_renda;
    float Inss;
    float sindicato;
    float salario_liquido;
     printf("Quanto voce ganha por hora: ");
     scanf("%f", &ganho_em_horas);

     printf("Qual o numeros de horas trabalhadas: ");
     scanf("%f", &horas_trabalhadas);


     salario = ganho_em_horas * horas_trabalhadas;
     Inss = (salario * 0.08);
     sindicato = (salario * 0.05);
     imposto_de_renda = (salario * 0.11);
     salario_liquido = salario - (Inss + sindicato + imposto_de_renda);

     printf("\n\nSeu salario bruto e de: R$ %.2f", salario);
     printf("\nQuanto voce pagou ao Inss: R$ %.2f", Inss);
     printf("\nQuanto voce pagou ao sindicato: R$ %.2f", sindicato);
     printf("\nSeu salario liquido e de: R$ %.2f", salario_liquido);

    return 0;
}