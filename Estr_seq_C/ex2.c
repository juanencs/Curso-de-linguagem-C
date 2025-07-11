/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief 
 * Faça um programa que receba tres notas,
calcule e mostre a media aritmetica entre elas.
 * @version 0.1
 * @date 2025-05-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main(){

    double n1, n2, n3;
    double media;
    
    printf ("Informe tres notas, em sequencia: \n");
    scanf ("%lf %lf %lf", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf ("Media aritmetica: %lf\n", media);

    return 0;
}