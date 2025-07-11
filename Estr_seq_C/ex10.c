/**
 * @file ex10.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Programa que calcule e mostre a área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14.
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#define PI 3.14 

int main (){

    double area, raio;
    double expoente = 2.0;

        printf ("Para calcular a área do círculo, insira o valor do raio: ");
        scanf ("%lf", &raio);

        area = PI * (raio*raio);

        printf  ("Valor da área: %lf\n", area);

    return 0;
}