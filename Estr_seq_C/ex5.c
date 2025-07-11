/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Programa que receba o sal�rio de um  funcion�rio  e  o  percentual  de  aumento,  calcule  e  mostre  o valor  do  aumento e o novo sal�rio.
 * @version 0.1
 * @date 2025-07-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main (){

    double sal, pcent_aumento, val_aumento, novo_sal;
    
        printf ("Insira o salario: ");
        scanf ("%lf", &sal);

        printf ("Insira o percentual de aumento: ");
        scanf ("%lf", &pcent_aumento);

        val_aumento = sal * (pcent_aumento/100);
        novo_sal = sal + val_aumento;

        printf ("Valor do aumento: %lf\n", val_aumento);
        printf ("Novo salario: %.2lf\n", novo_sal);

    return 0;
}