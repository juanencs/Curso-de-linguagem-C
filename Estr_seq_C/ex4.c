/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief  Programa que receba o sal�rio de um  funcion�rio,  calcule  e  mostre  o  novo  sal�rio,  sabendo-se  que  este  sofreu  um aumento de 25%. 
 * @version 0.1
 * @date 2025-07-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main (){

    double sal, novo_sal;

    printf ("Insira o salario: ");
    scanf ("%.2lf", &sal);

    novo_sal = sal + (sal*0.25);

    printf ("Novo salario: %.2lf", novo_sal);

    return 0;
}