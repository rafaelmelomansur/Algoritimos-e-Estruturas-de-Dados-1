/*
 ============================================================================
 Name        : prj_tarefa2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Função para mostrar os números pares mútiplos de 3 até 1000
void mostrarNumerosParesMultiplosDeTres() {
	int cont = 0;
	printf("Números pares múltiplos de 3 até 1000:\n");
	for (int i = 2; i <= 1000; i += 2) {
	if (i % 3 == 0) {
	printf("%d ", i);
	cont++;
				}
			}
			printf("\nTotal de números pares múltiplos de 3: %d\n", cont);
		}
//Função para ler 10 números inteiros, calcular a soma e a média
void calcularSomaEMedia() {
			int numero;
			int soma = 0;

			printf("Digite 10 númeos inteiros:\n");
			fflush(stdout);
			for (int i = 0; i < 10; i++) {
				scanf("%d", &numero);
				soma += numero;
			}

			double media = soma / 10;

			printf("Soma: %d\n", soma);
			printf("Média: %.2lf\n", media);
		}
//Função para calcular a área de 4 cômodos de uma casa
void calcularAreaDosComodos() {
	double largura, comprimento,area,areatotal;
	fflush(stdout);
	for (int i = 1; i <= 4; i++){
		printf("Digite a largura do cômodo: %d", i);
		scanf("%lf", &largura);
		printf("Digite o comprimento do cômodo: %d", i);
		scanf("%lf", &comprimento);
		area = largura * comprimento;
		areatotal = areatotal + area;
		printf("A área do cômodo %d é: %.2lf metros quadrados\n", i, area);
	}
	printf("A área total é: %.2lf", areatotal);
}
//Função para calcular o perímetro e a área de um círculo
void calcularPerimetroEAreaDoCirculo() {
	double raio, perimetro, area;
	const double PI = 3.14;
	printf("Digite o valor do raio do círculo: ");
	fflush(stdout);
	scanf("%lf", &raio);
	perimetro = 2 * PI * raio;
	area = PI * raio * raio;
			//pow(raio,2);
			//#include <math.h>
	printf("Perímetro do círculo: %.2lf", perimetro);
	printf("Área do círculo: %.2lf", area);
}
int main(void) {
	mostrarNumerosParesMultiplosDeTres();

	calcularSomaEMedia();

	calcularAreaDosComodos();

	calcularPerimetroEAreaDoCirculo();

	return 0;

}
