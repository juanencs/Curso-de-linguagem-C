/**
 * @file ex6.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 para "op", mostrar a mensagem "Opção inválida.".
 * @version 0.1
 * @date 2025-07-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    double base, altura, area, perimetro; 
    int op;

        printf ("Informe o valor da base: ");
        scanf ("%lf", &base);

        printf ("Informe o valor da altura: ");
        scanf ("%lf", &altura);

        perimetro = base*2 + altura*2;
        area = base * altura;

        printf ("Opções de processamento: 0 - calcular perímetro; 1 - calcular a área.\n");
        printf ("\n");
        scanf ("%d", &op);
        printf ("\n");

        switch (op)
        {
        case 0:
            printf ("O valor do perímetro é: %lf\n", perimetro);
            break;
        
        case 1:
            printf ("O valor da área é: %lf\n", area);
            break;
        
        default:
            printf ("Opção inválida!\n");
            break;
        }

    return 0;
}