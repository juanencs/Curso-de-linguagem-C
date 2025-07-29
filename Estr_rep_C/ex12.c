/**
 * @file ex12.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que receba um número N e informe se N é um número primo, ou não. A saber: um número primo é um inteiro positivo que só pode ser dividido por ele mesmo e por um, apenas
 * @version 0.1
 * @date 2025-07-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int N, i, cont;
    
    printf("Insira um número:\n");
    scanf("%d", &N);

    cont = 0;
    for(i=1; i<=N; i++){
        if((N % i) == 0){
        cont++;
        }
    }
    if(cont == 2){
        printf("%d é primo.\n", N);
    } else {
        printf("%d não é primo.\n", N);
    }
}