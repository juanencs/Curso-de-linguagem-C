/**
 * @file ex8.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que peça para o usuário informar dois números. Após isso, o algoritmo deve mostrar cálculo o primeiro número elevado ao segundo. Ao final, o algoritmo deve perguntar se o usuário deseja repetir a operação. Caso o usuário insira o caractere "s", o algoritmo solicita novamente dois números e mostra novamente a potência do primeiro pelo segundo. Caso contrário, o algoritmo é encerrado
 * @version 0.1
 * @date 2025-07-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main(){

    double n1, n2, res;
    char op; // Operação

    do{
        printf ("Insira o primeiro número: ");
        scanf ("%lf", &n1);
        printf ("Insira o segundo número: ");
        scanf ("%lf", &n2);
        res = pow(n1, n2);
        printf ("%.2lf elevado a %.2lf: %.2lf\n", n1, n2, res);

        printf ("Deseja repetir a operação? (s/n)\n");
        scanf (" %c", &op);
        printf("\n");

    } while (op == 'S' || op == 's');
    
    printf("Operação encerrada.\n");
    return 0;
}