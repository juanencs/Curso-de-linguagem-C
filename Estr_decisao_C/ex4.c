/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois
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

        if (n1 == n2){
            printf ("A multiplicação entre os números é: %lf\n", n1*n2);
        }
        if (n1 > n2){
            printf ("A subtração do primeiro pelo segundo é: %lf\n", n1-n2);
        } 
        if (n1 < n2){
            printf ("A soma dos dois números é de: %lf\n", n1+n2);
        }

    return 0;
}