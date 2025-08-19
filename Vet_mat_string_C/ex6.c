/**
 * @file ex6.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que carregue um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos. O segundo vetor resultante deve conter os números negativos. Cada vetor resultante vai ter no máximo oito posições, sendo que nem todas devem obrigatoriamente ser utilizadas. Imprima o conteúdo dos vetores resultantes, sem que sejam impressos "lixos de memória".
 * @version 0.1
 * @date 2025-08-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int v[8], res1[8], res2 [8];
    int i, j, k;
    j = 0;
    k = 0;

    for (i = 0; i < 8; i++) {
        printf ("Insira o dado v[%d]: ", i);
        scanf ("%d", &v[i]);
        if (v[i] > 0) {
            res1[j] = v[i];
            j++;
        }
        if (v[i] < 0) {
            res2[k] = v[i];
            k++;
        }
    }
    
    printf ("Vetor de positivos: \n");
    for (i = 0; i < j; i++) {
        printf ("%d ", res1[i]);
    }

    printf ("\nVetor de negativos:\n");
    for (i = 0; i < k; i++) {
        printf ("%d ", res2[i]);
    }
    printf ("\n");

    return 0;
}