/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir "Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a mensagem: "Erro".
 * @version 0.1
 * @date 2025-07-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double n1, n2, n3;

        printf ("Insira o primeiro número: ");
        scanf ("%lf", &n1);

        printf ("Insira o segundo número: ");
        scanf ("%lf", &n2);

        printf ("Insira o terceiro número: ");
        scanf ("%lf", &n3);

        if (n1 > n2 && n1 > n3){
            printf ("Condição satisfeita!\n");
        } else {
            printf ("Erro!\n");
        }

    return 0;
}