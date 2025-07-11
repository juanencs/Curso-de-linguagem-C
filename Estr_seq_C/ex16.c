/**
 * @file ex16.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba o ano de nascimento de uma pessoa e ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos essa pessoa terá em 2030;
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
# include <stdio.h>

int main (){

    int ano_nasc, ano_atual, idade_atual, idade_2030;

        printf ("Insira o ano de nascimento: ");
        scanf ("%d", &ano_nasc);
        printf ("Insira o ano atual: ");
        scanf ("%d", &ano_atual);

        idade_atual = ano_atual - ano_nasc;
        idade_2030 = 2030 - ano_nasc; 

        printf ("Idade atual: %d\n", idade_atual);
        printf ("Idade em 2030: %d\n", idade_2030);

}