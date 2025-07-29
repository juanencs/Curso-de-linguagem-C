/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B. Suponha que o usuário respeite o enunciado e insira valores válidos para A e B
 * @version 0.1
 * @date 2025-07-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int A = 0, B;
    int i = 1;

    printf ("Insira os valor de A: ");
    scanf ("%d", &A);
    printf ("Insira os valor de B: ");
    scanf ("%d", &B);
    
    i = A+1;

    printf ("Série numérica: ");
    while (i < B) {
        printf ("%d ", i);
        i++;
    }
    printf ("\n");

    return 0;
}