/**
 * @file ex11.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que mostre os oito primeiros termos da sequência de Fibonacci.
0-1-1-2-3-5-8-13-21-34-55
 * @version 0.1
 * @date 2025-07-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main(){

    int termo_ant1, termo_ant2, termo_atual;
    int i;

    termo_ant2 = 0;
    termo_ant1 = 1;
    
    printf ("Série de Fibonacci: \n");
    printf ("%d ", termo_ant1);
    printf ("%d", termo_ant2);
    
    for (i = 3; i <= 8; i++){
        termo_atual = termo_ant1 + termo_ant2;
        printf ("%d ", termo_atual);
        termo_ant2 = termo_ant1;
        termo_ant1 = termo_atual;
    }

    return 0;
}