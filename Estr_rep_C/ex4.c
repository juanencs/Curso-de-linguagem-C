/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que receba um número N e imprima a tabuada de N, na tela.
 * @version 0.1
 * @date 2025-07-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int i, N, res;
    
    printf ("Insira o valor de N: ");
    scanf ("%d", &N);
    printf ("Tabuada de N: \n");
    
    for (i = 1; i <= 10; i++)
    {
        res = N * i;
        printf ("%d x %d = %d\n", N, i, res);
    }
    
    return 0;
}