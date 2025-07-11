/**
 * @file ex9.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.
 * @version 0.1
 * @date 2025-07-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double area, base, altura;

        printf ("Para calcular a área do triangulo, insira o valor da base: ");
        scanf ("%lf", &base);

        printf ("Insira o valor da altura: ");
        scanf ("%lf", &altura);

        area = (base * altura) / 2.0;

        printf ("Valor da área é: %lf\n", area);

    return 0;
}