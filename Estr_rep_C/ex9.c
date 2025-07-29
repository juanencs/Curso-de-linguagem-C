/**
 * @file ex9.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que peça ao usuário que insira dois números inteiros positivos A e B, no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). O algoritmo deve mostrar, na tela, todos os números ímpares compreendidos entre A e B (inclusive)
 * @version 0.1
 * @date 2025-07-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int A, B, i;

    printf ("Insira o valor de A: ");
    scanf ("%d", &A);
    printf ("Insira o valor de B: ");
    scanf ("%d", &B); 

    printf ("Todos os números ímpares compreendidos entra A e B (inclusive):\n");

    for (i = A; i <= B; i++){
        if (i % 2 != 0){
            printf ("%d\n", i);
        }
    }

    return 0;
}