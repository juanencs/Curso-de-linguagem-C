/**
 * @file ex5.c
 * @author Juan Enrico
 * @brief Programa que receba o salário de um  funcionário  e  o  percentual  de  aumento,  calcule  e  mostre  o valor  do  aumento e o novo salário.
 * @version 0.1
 * @date 2025-07-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main (){

    double salario, pcent_aumento, val_aumento, novo_sal;
    
        printf ("Insira o salario: ");
        scanf ("%lf", &salario);

        printf ("Insira o percentual de aumento: ");
        scanf ("%lf", &pcent_aumento);

        val_aumento = salario * (pcent_aumento/100);
        novo_sal = salario + val_aumento;

        printf ("Valor do aumento: %lf\n", val_aumento);
        printf ("Novo salario: %.2lf\n", novo_sal);

    return 0;
}