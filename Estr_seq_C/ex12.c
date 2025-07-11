/**
 * @file ex12.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50, 20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba o menor número de notas possível.
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int saque, n100, n50, n20, n10, n5, n2;

        printf ("Insira o valor de saque: ");
        scanf ("%d", &saque);

        // Cálculo para saber a quantidade exata de cada nota baseado no valor de saque.
        n100 = saque / 100;
        n50 = saque % 100 / 50;
        n20 = saque % 100 % 50 / 20;
        n10 = saque % 100 % 50 % 20 / 10;
        n5 = saque % 100 % 50 % 20 % 10 / 5;
        n2 = saque % 100 % 50 % 20 % 10 % 5 / 2;

        printf ("Nº de notas de R$ 100,00: %d\n", n100);
        printf ("Nº de notas de R$ 50,00: %d\n", n50);
        printf ("Nº de notas de R$ 20,00: %d\n", n20);
        printf ("Nº de notas de R$ 10,00: %d\n", n10);
        printf ("Nº de notas de R$ 5,00: %d\n", n5);
        printf ("Nº de notas de R$ 2,00: %d\n", n2);

    return 0;
}