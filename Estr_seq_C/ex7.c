/**
 * @file ex7.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Programa que receba o salário-base de  um  funcionário,  calcule  e  mostre  o  seu  salário  a  receber,  sabendo-se  que  esse funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.
 * @version 0.1
 * @date 2025-07-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double sal, sal_liquido;

        printf ("Insira o seu salário base: ");
        scanf ("%lf", &sal);

        sal_liquido = sal-(sal*0.1) + 600;

        printf ("O seu salário a receber é: %.2lf\n", sal_liquido);

    return 0;
}