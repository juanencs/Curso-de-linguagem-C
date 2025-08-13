/**
 * @file ex1.c
 * @author Juan Enrico Cardoso Soares 
 * @brief Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Ao final, o algoritmo deve mostrar o somatório de todos os elementos do vetor, bem como a média aritmética entre todos os termos.
 * @version 0.1
 * @date 2025-08-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
int main(){

#include <stdio.h>
    
    int i;
    double v[10];
    double S, M;
    
    S = 0;
    for (i = 0; i < 10; i++) {
        printf ("Insira um dado da posição %d: ", i+1);
        scanf ("%lf", &v[i]);
        S += v[i];   
    }
    M = S/10.0;

    printf ("Somatório: %.2lf\n", S);
    printf ("Média: %.2lf\n", M);

    return 0;
}