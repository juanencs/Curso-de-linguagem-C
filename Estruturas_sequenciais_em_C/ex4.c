/**
 * @file ex4.c
 * @author Juan Enrico
 * @brief  Programa que receba o salário de um  funcionário,  calcule  e  mostre  o  novo  salário,  sabendo-se  que  este  sofreu  um aumento de 25%. 
 * @version 0.1
 * @date 2025-07-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main (){

    double salario, novo_salario;

    printf ("Insira o salario: ");
    scanf ("%.2lf", &salario);

    novo_salario = salario + (salario*0.25);

    printf ("Novo salario: %.2lf", novo_salario);

    return 0;
}