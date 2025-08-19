/**
 * @file ex5.c
 * @author juanenrico@outlook.com
 * @brief Faça um programa que carregue dois vetores de dez elementos numéricos cada um e mostre um vetor resultante da intercalação desses dois vetores.
 * @version 0.1
 * @date 2025-08-15
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main(){

    int v1[10], v2[10], inter[20];
    int i, j;

    for (i = 0; i < 10; i++) {
        printf ("Insira o dado do v1[%d]: ", i);
        scanf ("%d", &v1[i]);
    }
    for (i = 0; i < 10; i++) {
        printf ("Insira o dado do v2[%d]: ", i);
        scanf ("%d", &v2[i]);
    }
    
    j = 0;
    for (i = 0; i < 10; i++) {
        inter[j] = v1[i];
        inter[j+1] = v2[i];
        j += 2;
    }

    for (i = 0; i < 20; i++) {
        printf ("%d ", inter[i]);
    }

    printf ("\n");

    return 0;
}