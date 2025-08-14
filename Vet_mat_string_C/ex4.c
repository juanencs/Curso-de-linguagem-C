/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que carregue um vetor e nove elementos numéricos inteiros, calcule e mostre os números primos e suas respectivas posições
 * @version 0.1
 * @date 2025-08-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    
    int v[9];
    int i, j, cont;
    
    for (i = 0; i < 9; i++) {
        printf ("Insira o dado da posição %d: ", i+1);
        scanf ("%d", &v[i]);
    }
    
    for (i = 0; i < 9; i++) {
        cont = 0;
        for (j = 1; j <= v[i]; j++) {
            if ((v[i] % j) == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            printf("%d é primo, posição: %d.\n", v[i], i+1);
        }     
    } 
    return 0;
}