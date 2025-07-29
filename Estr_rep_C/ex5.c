/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em média 2,1 centímetros ao ano. Seu irmão, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em média 1,1 centímetro por ano. Elabore um programa que conte quantos anos serão necessários para que a altura de Charlinho ultrapasse a de Bossa.
 * @version 0.1
 * @date 2025-07-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int anos;
    double alt_char, alt_bossa;

    alt_bossa = 145.0; // metros p/ centímetros
    alt_char = 140.0; // metros p/ centímetros

    for (anos = 0; alt_bossa >= alt_char; anos++){   //Loop para verificação de quantos anos serão necessários. 
        alt_bossa += 1.10;
        alt_char += 2.10;
    }
    printf ("Serão necessários %d anos para Charlinho ultrapassar Bossa.\n", anos);  //Quantidade de anos em que Charlinho irá ultrapassar a altura de Bossa. 

    return 0;
}