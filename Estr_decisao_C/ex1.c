/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba dois números e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".
 * @version 0.1
 * @date 2025-07-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double n1, n2;

        printf ("Insira o primeiro número: ");
        scanf ("%lf", &n1);
        
        printf ("Insira o segundo número: ");
        scanf ("%lf", &n2);

        if (n1 > n2){
            printf ("%lf é maior que %lf.\n", n1, n2);
        } else if (n2 > n1){
            printf ("%lf é maior que %lf.\n", n2, n1);
        } else if (n1 == n2){
            printf ("Os números são iguais.\n");
        }

    return 0;
}