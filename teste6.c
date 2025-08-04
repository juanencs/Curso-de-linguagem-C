/* 
Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro da porcentagem do ano anterior.
Faça um programa que receba o ano atual determine o salário atual desse funcionário.
*/
#include <stdio.h>

int main(){

    int ano_inicio, ano_atual, i;
    double sal;

    printf ("Insira o ano atual: ");
    scanf ("%d", &ano_atual);

    ano_inicio = 2016;
    sal = 1000.0;
    for (i == 1.5; ano_inicio <= ano_atual; i *= 2){
        sal += sal * (i/100.0); 
    }

    printf ("Salário atual: %lf", sal);

    return 0;
}