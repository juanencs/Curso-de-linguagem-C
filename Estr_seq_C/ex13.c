/**
 * @file ex13.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main(){

    double num, num_q, num_c, num_raizq, num_raizc;

        printf ("Insira um número: ");
        scanf ("%lf", &num);

        num_q = pow(num, 2);
        num_c = pow(num, 3);
        num_raizq = sqrt(num);
        num_raizc = pow(num, 1.0/3.0);

        printf ("a) número digitado ao quadrado: %lf\n", num_q);
        printf ("b) número digitado ao cubo: %lf\n", num_c);
        printf ("c) raíz quadrada do número digitado: %lf\n", num_raizq);
        printf ("d) raíz cúbica do número digitado: %lf\n", num_raizc);

    return 0;

}