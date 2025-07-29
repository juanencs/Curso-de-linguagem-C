/**
 * @file ex13.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que mostre a tabuada de todos os números inteiros compreendidos entre 1 e 10 (inclusive).
 * @version 0.1
 * @date 2025-07-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int i, N, res;
    i = 1;
    N = 1;
    
    while (i <= 10 && N <= 10) {
        res = N * i;
        printf ("%d x %d = %d\n", N, i, res);
        i++;
        
        if (i > 10){
            printf ("\n");
            N++;
            i = 1;
        }
    }

    return 0;
}