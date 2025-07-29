/**
 * @file ex15.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor de E, conforme a fórmula a seguir: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
 * @version 0.1
 * @date 2025-07-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int N, i, j;
    double E, fatorial;

    printf ("Insira o valor de N: ");
    scanf ("%d", &N);

    E = 1;
    for(i=1; i<=N; i++){
        fatorial = 1;
        for(j=1; j<=i; j++){
            fatorial = fatorial * j;
        }
        E = E + 1.0/fatorial;
    }
    printf("Resultado: %lf\n", E);

    return 0;
}

/* Outra opção de código
    i = 1;
    do{    
        for (i = N; i >= 1; i--){
            fatorial = fatorial * i;
        }
            E = E + 1.0/fatorial;
            fatorial = 1;
            N--;
    } while (i < N);
    
    printf ("Resultado: %.10lf\n", E);
    */