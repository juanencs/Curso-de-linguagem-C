/**
 * @file ex6.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que peça para o usuário inserir vários números inteiros. O algoritmo deverá contabilizar a quantidade de números positivos informados. Caso o usuário digite 0, o algoritmo deve mostrar quantidade contabilizada e encerrar.
 * @version 0.1
 * @date 2025-07-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int N, i = 0;

    do{
        printf ("Insira um número: ");
        scanf ("%d", &N); 

        if (N > 0){
            i++;
        } 
    } while (N != 0);
    
    printf ("Quantidade de números positivos: %d\n", i);

    return 0;
}