/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1 e 10 (inclusive).
 * @version 0.1
 * @date 2025-07-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int i, soma = 0;

    for (i = 1; i <= 10; i++){
        soma = soma + i;
    }
    printf ("Somatório: %d \n", soma);

    return 0;
}