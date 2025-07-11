/**
 * @file ex8.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
 * @version 0.1
 * @date 2025-07-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double deposito, taxa, rendimento, val_total;

        printf ("Insira o valor de depósito: ");
        scanf ("%lf", &deposito);

        printf ("Insira o valor da taxa: ");
        scanf ("%lf", &taxa);

        rendimento = deposito*(taxa/100.0);
        val_total = deposito + rendimento;

        printf ("Valor de rendimento: %.2lf\n", rendimento);
        printf ("Valor total: %.2lf\n", val_total);

    return 0;
}