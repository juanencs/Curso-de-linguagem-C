/**
 * @file ex15.c
 * @author your name (you@domain.com)
 * @brief Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de bonificação e de auxílio-escola.Salário de até R$ 500,00 - bonificação de 5% do salário; entre R$ 500,01 e R$ 1200,00 - bonificação de 12% do salário; acima de R$ 1200,00 - sem bonificação; até R$ 600,00 - auxílio escola de R$ 150,00; mais que R$ 600,00 - auxílio escola de R$ 100,00.
 * @version 0.1
 * @date 2025-07-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

double sal = 0, sal_total = 0; 

    printf("Informe o seu salário: ");
    scanf ("%lf", &sal);

    if(sal <= 500.0){
        sal_total = sal+(sal*0.05) + 150.0;
        printf ("Salário total: %.2lf\n", sal_total);
    }
    if (sal > 500.0 && sal <= 600.0 ){
        sal_total = sal+(sal*0.12) + 150.0;
        printf ("Salário total: %.2lf\n", sal_total);
    }
    if (sal > 600.0 && sal <= 1200.0){
        sal_total = sal+(sal*0.12) + 100.0;
        printf ("Salário total: %.2lf\n", sal_total);
    }
    if (sal > 1200.0){
        sal_total = sal+100.0;
        printf ("Salário total: %.2lf\n", sal_total);
    }

    return 0;
}