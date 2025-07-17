/**
 * @file ex13.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e dos dados necessários para executar cada operação. Suponha que o usuário não irá inserir valores inválidos.
Menu de opções:
1. Somar dois números
2. Raiz quadrada de um número
Digite a opção desejada
 * @version 0.1
 * @date 2025-07-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 
#include <math.h>

int main(){

    int op;
    double n1, n2, calc;

        printf ("--- Menu de Opções ---\n");
        printf ("1 - Somar dois números;\n");
        printf ("2 - Raiz quadrada de um número;\n");
        printf ("Digite a opção desejada: ");
        scanf ("%d", &op);
        
        // Condição para a escolha nº1 do menu
        if (op == 1) {
            printf ("Insira o primeiro número: ");
            scanf ("%lf", &n1);
            printf ("Insira o segundo número: ");
            scanf ("%lf", &n2);
            calc = n1+n2;
            printf ("Resultado da soma: %.2lf\n", calc);
        }
        
        // Condição para a escolha nº2 do menu
        if (op == 2) {
            printf ("Insira o número: ");
            scanf ("%lf", &calc);
            calc = sqrt(calc);
            printf ("Resultado da raiz quadrada: %.2lf\n", calc);
        }  

    return 0;
}