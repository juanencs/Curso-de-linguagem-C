/**
 * @file ex12.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba quatro valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos. Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3.
 * 1- A, B e C em ordem crescente.
 * 2- A, B e C em ordem decrescente. 
 * 3- O maior fica entre os outros dois números. 
 * @version 0.1
 * @date 2025-07-15
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main(){

    int I;
    double A, B, C, temp;
    
        printf ("Insira o primeiro número (A): ");
        scanf ("%lf", &A);    

        printf ("Insira o primeiro número (B): ");
        scanf ("%lf", &B);

        printf ("Insira o primeiro número (C): ");
        scanf ("%lf", &C);
        
        printf ("Opções de processamento: 1 - Ordem crescente; 2 - ordem descrescente; 3 - maior número entre os outros dois.\n");
        printf ("\n");
        scanf ("%d", &I);
        printf ("\n");

        switch (I)
        {
        case 1:
            if(A > B){
                temp = A;
                A = B;
                B = temp;
            }
            if (A > C) {
                temp = A;
                A = C;
                C = temp;
            }
            if (B > C) {
                temp = B;
                B = C;
                C = temp;
            }
            printf ("Ordem crescente: %.2lf, %.2lf, %.2lf\n", A, B, C);
            break;
        
        case 2:
            if(A > B) {
                temp = A;
                A = B;
                B = temp;
            }
            if (A > C) {
                temp = A;
                A = C;
                C = temp;
            }
            if (B > C) {
                temp = B;
                B = C;
                C = temp;
            }
            printf ("Ordem decrescente: %.2lf, %.2lf, %.2lf\n", C, B, A);
            break;

        case 3:
            if(A > B && A > C) {
                printf ("Maior número entre os outros dois: %.2lf, %.2lf, %.2lf\n", B, A, C);
            } 
            if (B > A && B > C) {
                printf ("Maior número entre os outros dois: %.2lf, %.2lf, %.2lf\n", A, B, C);
            }
            if (C > A && C > B) {
                printf ("Maior número entre os outros dois: %.2lf, %.2lf, %.2lf\n", A, C, B);
            }             
            break;
            
        default:
            printf ("Opção inválida!\n");
            break;
        }

    return 0;
}