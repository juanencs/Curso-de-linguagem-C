/**
 * @file ex7.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito:
Notas: trabalho de laboratório, avaliação semestral, exame final. Respectivos pesos: 2, 3 e 4.
Média ponderada: 8,0 ~ 10,0 = A; 7,0 ~ 8,0 = B; 6,0 ~ 7,0 = C; 5,0 ~ 6,0: D; 0,0 ~ 5,0 = E;          

 * @version 0.1
 * @date 2025-07-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double nota_trab, nota_aval, nota_exame, media; 

        printf ("Nota do trabalho de laboratório: ");
        scanf ("%lf", &nota_trab);

        printf ("Nota da avaliação semestral: ");
        scanf ("%lf", &nota_aval);

        printf ("Nota do exame final: ");
        scanf ("%lf", &nota_exame);

        media = (nota_trab*2 + nota_aval*3 + nota_exame*4) / 9.0;

        if (media >= 8 && media <= 10){
            printf ("Média ponderada: %.2lf\n", media);
            printf ("Conceito A\n");
        }
        if (media >= 7 && media < 8){
            printf ("Média ponderada: %.2lf\n", media);
            printf ("Conceito B\n");
        }
        if (media >= 6 && media < 7){
            printf ("Média ponderada: %.2lf\n", media);
            printf ("Conceito C\n");
        }
        if (media >= 5 && media < 6){
            printf ("Média ponderada: %.2lf\n", media);
            printf ("Conceito D\n");
        }
        if (media >= 0 && media < 5){
            printf ("Média ponderada: %.2lf\n", media);
            printf ("Conceito E\n");
        }
    return 0;
}