/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só conseguirá processar dois números inteiros por vez.
 * @version 0.1
 * @date 2025-07-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main (){

    int opcao, n1, n2;

        printf ("Insira o primeiro número inteiro: ");
        scanf ("%d", &n1);

        printf ("Insira o segundo número inteiro: ");
        scanf ("%d", &n2);

        printf ("Insira algum número de 1 a 4 caso queira:\n 1- Somar;\n 2- Subtrair;\n 3- Multiplicar;\n 4- Dividir.\n");
        printf ("\n");
        scanf ("%d", &opcao);
        printf ("\n");
        
        switch (opcao)
        {
        case 1:
            printf ("Soma entre %d e %d é: %d\n", n1, n2, n1+n2);
            break;

        case 2:
            printf ("Subtração entre %d e %d é: %d\n", n1, n2, n1-n2);
            break;
            
        case 3:
            printf ("Multiplicação entre %d e %d é: %d\n", n1, n2, n1*n2);
            break;

        case 4:
            if (n1 < n2){
                printf ("O dividendo é menor que o divisor, não foi possível realizar a divisão inteira!\n");
            } else if (n2 == 0){
                printf ("Divisão por zero. Não é possível realizar a divisão com divisor zero!\n");
            } else if (n1 % n2 != 0){
                printf ("Não foi possível realizar a divisão inteira!\n");
            } else {
                printf ("Divisão entre %d e %d é: %d\n", n1, n2, n1/n2);
            }
            break;

        default:
            printf ("Valor inválido!\n");
            break;
        }
    
    return 0;
}