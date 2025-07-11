/**
 * @file ex15.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Sabe-se que: 1 pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1760 jardas;
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double pes, pol, jardas, milhas;

        printf ("Insira um valor em pés: ");
        scanf ("%lf", &pes);

        pol = pes * 12.0;
        jardas = pes / 3.0;
        milhas = pes / 5280.0;

        printf ("Medida em polegadas: %lf\n", pol);
        printf ("Medida em jardas: %lf\n", jardas);
        printf ("Medida em milhas: %lf\n", milhas);

    return 0;
}