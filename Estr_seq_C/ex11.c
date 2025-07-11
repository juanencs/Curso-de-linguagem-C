/**
 * @file ex11.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos.Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.
 * @version 0.1
 * @date 2025-07-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main (){

    int horas, min, sec, sec_crono;

        printf ("Insira a quantidade em segundos marcada no cronômetro: ");
        scanf ("%d", &sec_crono);

        horas = sec_crono / 3600; //Divisão dos segundos para encontrar o resultado em horas.
        min = (sec_crono % 3600) / 60; //Resto em segundos da divisão anterior transformado em minutos.  
        sec = (sec_crono % 3600) % 60; //Resto em segundos da divisão anterior transformado em segundos. 

        printf ("%d segundos são %d horas, %d minutos e %d segundos.\n", sec_crono, horas, min, sec);

    return 0;
}