/**
 * @file ex10.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga esta regra. Mostre, em seguida, os quatro números em ordem não-crescente.
 * @version 0.1
 * @date 2025-07-15
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int n1, n2, n3, n4, temp; 

        printf ("Insira 3 números em ordem crescente: ");
        scanf ("%d %d %d", &n1, &n2, &n3);
        printf ("Insira um quarto número: ");
        scanf ("%d", &n4);
        
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
        if(n1 > n4){
            temp = n1;
            n1 = n4;
            n4 = temp;
        }
        if (n2 > n3){
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if (n2 > n4){
            temp = n2;
            n2 = n4;
            n4 = temp;
        }
        if (n3 > n4){
            temp = n3;
            n3 = n4;
            n4 = temp;
        }

        printf ("Ordem decrescente: %d - %d - %d - %d\n", n4, n3, n2, n1);

    return 0;
}