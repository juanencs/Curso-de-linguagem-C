/**
 * @file ex14.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que leia um número N e que indique quantos valores inteiros e positivos devem ser lidos a seguir. Para cada número lido, mostre o fatorial desse valor.
 * @version 0.1
 * @date 2025-07-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int N, i, j, k;
    int fatorial;

    printf("Quantidade de números serão informados: ");
    scanf ("%d", &N);
    
    i = 1; //Contabilizador de números informados
    /* j = Guarda o valor do número que será calculado. */
    /* k = Faz o controle do cálculo do fatorial */
    
    while (i <= N){
        printf ("Insira o número %d\n", i);
        scanf ("%d", &j);
        
        fatorial = 1;
        for (k = j; k >= 1; k--){
            fatorial = fatorial * k;
        }
        printf  ("O fatorial de %d é %d.\n", j, fatorial);
        printf ("\n");
        i++;
    }
    
    return 0;
}