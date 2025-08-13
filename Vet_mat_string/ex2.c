/**
 * @file ex2.c
 * @author Juan Enrico
 * @brief Desenvolva um algoritmo que peça ao usuário que preencha os dados de um vetor de 5 posições com valores reais quaisquer, desde que estejam compreendidos entre 1 e 100 (suponha que o usuário irá respeitar o enunciado). Ao final, o algoritmo deve mostrar, na tela, o conteúdo de cada posição do vetor, dividido por 100.
 * @version 0.1
 * @date 2025-08-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int i, X;
    int v[10];

    for (i = 0; i < 10; i++){
        printf ("Insira o dado da posição %d: ", i+1);
        scanf ("%d", &v[i]);
    }
    printf ("Insira a chave de procura: ");
    scanf ("%d", &X);

    for (i = 0; i < 10; i++){
        if (X == v[i]){
            printf ("Chave encontrada na posição: %d", i);
        } else {
            continue; 
        }
    }
    return 0;
}
