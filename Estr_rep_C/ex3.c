/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo que N! = N * (N-1) * 
 * (N-2) ... * 3 * 2 * 1.
 * @version 0.1
 * @date 2025-07-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int N, i;
    int fatorial = 1; 

    printf("Insira o valor de N: ");
    scanf ("%d", &N);
    
    for (i = N; i >= 1; i--){
        fatorial = fatorial * i;
    }
    printf  ("O fatorial de %d é %d.\n", N, fatorial);

    return 0;
}