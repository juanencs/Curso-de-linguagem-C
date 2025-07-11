/**
 * @file ex6.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
 * @version 0.1
 * @date 2025-07-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main (){

    double sal, sal_liquido;

        printf ("Digite aqui o seu salário base: ");
        scanf ("%lf", &sal);

        sal_liquido = sal+(sal*0.05) - (sal*0.07);

        printf ("O seu salário a receber é: %.2lf\n", sal_liquido);

    return 0;
}