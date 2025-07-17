/**
 * @file ex14.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba a hora de início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min até as 23hr59min
 * @version 0.1
 * @date 2025-07-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

int hr_inicio, hr_fim, min_inicio, min_fim; 
int hr_dur, min_dur;

    printf ("Insira os dados do início do jogo: \n");
    printf ("Horas: ");
    scanf ("%d", &hr_inicio);
    printf ("Minutos: ");
    scanf ("%d", &min_inicio);

    printf ("Insira os dados do fim do jogo: \n");
    printf ("Horas: ");
    scanf ("%d", &hr_fim);
    printf ("Minutos: ");
    scanf ("%d", &min_fim);

    if (hr_inicio < hr_fim && min_inicio < min_fim){                          //Caso 1
        hr_dur = hr_fim - hr_inicio;
        min_dur = min_fim - min_inicio;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    }else if (hr_inicio < hr_fim && min_inicio > min_fim){                    //Caso 2
        hr_dur = hr_fim - hr_inicio - 1;
        min_dur = 60 - min_inicio + min_fim;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    } else if (hr_inicio > hr_fim && min_inicio < min_fim){                    //Caso 3
        hr_dur = 24 - hr_inicio + hr_fim;
        min_dur = min_fim - min_inicio;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    } else if (hr_inicio > hr_fim && min_inicio > min_fim){                    //Caso 4
        hr_dur = 24 - hr_inicio + hr_fim - 1;
        min_dur = 60 - min_inicio + min_fim;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    } else if (hr_inicio == hr_fim && min_inicio < min_fim){                   //Caso 5
        hr_dur = 0;
        min_dur = min_fim - min_inicio;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    } else if (hr_inicio == hr_fim && min_inicio > min_fim){                   //Caso 6
        hr_dur = 23;
        min_dur = 60 - min_inicio + min_fim;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    }else if (hr_inicio < hr_fim && min_inicio == min_fim){                   //Caso 7
        hr_dur = hr_fim - hr_inicio;
        min_dur = 0;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);

    } else if (hr_inicio > hr_fim && min_inicio == min_fim){                   //Caso 8
        hr_dur = 24 - hr_inicio + hr_fim;
        min_dur = 0;
        printf ("Duração do jogo: %d hrs e %d min\n", hr_dur, min_dur);
        
    } else if (hr_inicio == hr_fim && min_inicio == min_fim){                  //Caso 9 
        printf ("O jogo durou 24 horas.\n");
    }
    
    return 0;
}