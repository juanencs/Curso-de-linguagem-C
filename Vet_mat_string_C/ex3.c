/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Após preencher todo o vetor, o usuário deve inserir uma chave de busca X. Caso exista algum número igual a X, dentro do vetor, o algoritmo deve mostrar, na tela, o índice da primeira posição na qual X foi encontrado. Caso contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não encontrada.".
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

    for (i = 0; i < 10; i++) { 
        if (X == v[i]) {
            printf ("Chave encontrada na posição: %d\n", i+1);
            return 0;
        } 
    }
    
    printf ("Chave não encontrada!\n");
    
    return 0;
}