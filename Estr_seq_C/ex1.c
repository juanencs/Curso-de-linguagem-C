/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief 
 * Informar 4 numeros em sequencia e fazer a soma entre eles. 
 * @version 0.1
 * @date 2025-05-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 
#include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese_Brazil");

    double soma, n1, n2, n3, n4;

    printf ("Informe quatro numeros, em sequencia:\n");
    scanf ("%lf\n%lf\n%lf\n%lf", &n1, &n2, &n3, &n4);

    soma = n1 + n2 + n3 + n4;

    printf ("Resultado da soma: %lf\n", soma);

    return 0;
}
