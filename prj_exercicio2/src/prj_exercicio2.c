/*
 ============================================================================
 Name        : prj_exercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Num = 999, contnum = 0, soma = 0;

	while (Num != -1) {
		printf("Entre com um número; para encerrar, digite -1: ");
		scanf("%d", &Num);

		if (Num != -1) {
			soma = soma + Num;
			contnum = contnum + 1; // ou contnum++
		}
	}

	printf("A quantidade de números digitados é: %d\n", contnum);
	printf("A soma dos números digitados é: %d\n", soma);

	return 0;
}
