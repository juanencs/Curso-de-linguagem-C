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
    int i, cont; 
    
    for (i = 0; i < 9; i++) {
        printf ("Insira o dado da posição %d: ", i+1);
        scanf ("%d", &v[i]);
    }
    
    cont = 0;
    for(i = 1; i <= v[i]; i++) {
        if ((v[i] % i) == 0) {
            cont++;
        }
    }
    
    for (i = 0; i < 9; i++) {
        if (cont == 2) {
            printf("%d é primo, posição: %d.\n", v[i], i+1);
        }    
    }
    
    return 0;
}