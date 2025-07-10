/**
 * @file ex3.c
 * @author Juan Enrico
 * @brief Programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
 * @version 0.1
 * @date 2025-07-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main (){

    double n1, n2, n3; 
    double p1, p2, p3; 
    double media;

    printf ("Insira a primeira nota: ");
    scanf ("%lf", &n1);
    printf ("Insira o peso da primeira nota: ");
    scanf ("%lf", &p1);

    printf ("Insira a segunda nota: ");
    scanf ("%lf", &n2);
    printf ("Insira o peso da segunda nota: ");
    scanf ("%lf", &p2);

    printf ("Insira a terceira nota: ");
    scanf ("%lf", &n3);
    printf ("Insira o peso da terceira nota: ");
    scanf ("%lf", &p3);
    printf ("\n");

    media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

    printf ("Media ponderada: %lf\n", media);
    
    return 0;
}