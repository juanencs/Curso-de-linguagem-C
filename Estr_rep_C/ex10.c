/**
 * @file ex10.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do aluno mais alto e o número do mais baixo, junto com suas alturas.
 * @version 0.1
 * @date 2025-07-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int n, n_maior, n_menor, i;
    double altura, maior_alt, menor_alt;

   
    for (i = 1; i <= 10; i++){
        printf ("Insira o número do aluno:\n");
        scanf ("%d", &n);
        printf ("Insira a altura do aluno:\n");
        scanf ("%lf", &altura);
        
        if (i == 1){
            maior_alt = altura;
            n_maior = n;
            menor_alt = altura;
            n_menor = n;
        } else {
            if (altura > maior_alt) {
            maior_alt = altura;
            n_maior = n;
            }
            if (altura < menor_alt) {
            menor_alt = altura;
            n_menor = n;
            }
        }
    }        
    printf ("Número do maior aluno: %d\n", n_maior);
    printf ("Altura do maior aluno: %.2lf\n", maior_alt);
    printf ("Número do menor aluno: %d\n", n_menor);
    printf ("Altura do menor aluno: %.2lf\n", menor_alt);

    return 0;
}