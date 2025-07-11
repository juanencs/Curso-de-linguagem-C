/**
 * @file ex14.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main(){

    double num1, num2, potencia;
    
        printf ("Insira dois números: \n");
        scanf ("%lf %lf", &num1, &num2);

        potencia = pow(num1, num2);

        printf ("Resultado da potência: %lf\n", potencia);

    return 0;
}