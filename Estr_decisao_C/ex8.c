/**
 * @file ex8.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para aprovação, considerando que a média no exame é 6,0.
   Média aritmética     Mensagem
      0,0 ~ 3,0         Reprovado
      3,0 ~ 7,0           Exame
      7,0 ~ 10,0         Aprovado
 * @version 0.1
 * @date 2025-07-14
 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double n1, n2, n3, media, nota_exame; 

        printf ("Insira a primeira nota: ");
        scanf ("%lf", &n1);

        printf ("Insira a segunda nota: ");
        scanf ("%lf", &n2);

        printf ("Insira a terceira nota: ");
        scanf ("%lf", &n3);

        media = (n1+n2+n3) / 3.0; 
        nota_exame = (12.0 - media) ;

        if (media >= 0.0 && media < 3.0){
            printf ("Média: %lf\n", media);
            printf ("Reprovado!\n");
        }
        if (media >= 3.0 && media < 7.0){
            printf ("Média: %lf\n", media);
            printf ("Exame.\n");
            printf ("É preciso tirar %lf para ser aprovado!\n", nota_exame);
        }
        if (media >= 7.0 && media <= 10.0){
            printf ("Média: %lf\n", media);
            printf ("Aprovado. Parabéns!\n");
        }


    return 0;
}