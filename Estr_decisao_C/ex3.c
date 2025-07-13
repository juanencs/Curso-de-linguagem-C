/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba um número inteiro e verifique se esse número é par ou ímpar.
 * @version 0.1
 * @date 2025-07-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main (){

    int num; 

        printf ("Insira um número: ");
        scanf ("%d", &num);

        if (num % 2 == 0){
            printf ("O número é par!\n");
        } else {
            printf ("O número é ímpar!\n");
        }

    return 0;
}