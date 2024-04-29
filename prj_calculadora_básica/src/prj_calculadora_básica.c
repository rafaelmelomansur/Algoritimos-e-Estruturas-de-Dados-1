/*
 ============================================================================
 Name        : prj_calculadora_b�sica.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double num1, num2, resultado;

    // Solicitação de entrada do usuário
    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    // Realiza a operação de acordo com o operador inserido pelo usuário
    switch(operator) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Verifica se o segundo número não é zero para evitar divisão por zero
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro! Divisão por zero não é permitida.\n");
                return 1; // Retorna 1 para indicar um erro
            }
            break;
        default:
            printf("Erro! Operador inválido.\n");
            return 1; // Retorna 1 para indicar um erro
    }

    // Exibe o resultado
    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
