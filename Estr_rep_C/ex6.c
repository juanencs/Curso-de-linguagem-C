/**
 * @file ex6.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro
da porcentagem do ano anterior.
Faça um programa que receba o ano atual determine o salário atual desse funcionário.
 * @version 0.1
 * @date 2025-07-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double sal, sal_atual, p; // P = porcentagem
    int ano, ano_atual;
    
    printf ("Insira o ano atual: ");
    scanf ("%d", &ano_atual);
    
    ano = 2015;
    p = 0.015;
    for (sal = 1000.0; ano < ano_atual; p*=2){
        sal = sal + (sal*p);
        ano++;
    }
    
    sal_atual = sal;
    printf ("O salário atual é: %.2lf\n", sal_atual);

    return 0;
}