/**
 * @file ex9.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba três números distintos e mostre-os em ordem crescente.
 * @version 0.1
 * @date 2025-07-15
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int n1, n2, n3, temp; 

        printf ("Insira 3 números: ");
        scanf ("%d %d %d", &n1, &n2, &n3);

        if (n1 > n2){
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n1 > n3){
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if (n2 > n3){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        printf ("Ordem crescente: %d - %d - %d\n", n1, n2, n3);

    return 0;
}