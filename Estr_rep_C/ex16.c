/**
 * @file ex16.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que peça ao usuário que insira cinco conjuntos de dois números inteiros positivos (A, B), no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). Para cada dupla (A, B), informada pelo usuário, o algoritmo deve mostrar, na tela, todos os números pares compreendidos entre A e B (inclusive).
 * @version 0.1
 * @date 2025-07-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int A, B, i, j;

    i = 1;
    while (i <= 5) {
        printf ("Insira o valor de A: ");
        scanf ("%d", &A);
        printf ("Insira o valor de B: ");
        scanf ("%d", &B); 

        printf ("Todos os números pares compreendidos entra A e B (inclusive):\n");

        for (j = A; j <= B; j++){
            if (j % 2 == 0){
                printf ("%d ", j);               
            }
        }
        printf ("\n\n");
        i++;
    }

    return 0;
}