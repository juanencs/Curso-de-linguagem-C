/**
 * @file ex11.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule e mostre as raízes da respectiva equação de segundo grau.
 * @version 0.1
 * @date 2025-07-15
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main(){

    double raiz_1, raiz_2;
    int a, b, c, delta;

        printf ("Insira os valores dos coeficientes a, b e c: \n");
        scanf ("%d %d %d", &a, &b, &c);

        delta = b*b - 4*a*c;
        raiz_1 = (-b + sqrt(delta)) / 2*a;
        raiz_2 = (-b - sqrt(delta)) / 2*a;

        if (delta < 0){
            printf ("Raízes fora do domínio dos números reais.\n");
        } else {
            printf ("Raiz x': %.2lf\n", raiz_1);
            printf ("Raiz x'': %.2lf\n", raiz_2);
        }

    return 0;
}