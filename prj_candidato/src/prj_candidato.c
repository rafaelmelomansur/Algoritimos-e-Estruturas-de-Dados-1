/*
 ============================================================================
 Name        : prj_candidato.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// Função para validar a situação da pessoa
void validarSituacao(int idade, int altura, int sexo) {
	if (altura >= 180 && idade > 16) {
		if (sexo == 1){
			printf("Apta a jogar no time Feminino Juvenil de Basquete.\n");
	 } else if (sexo == 2) {
		printf("Apto a jogar no time Juvenil Masculino de Basquete.\n");
	 } else {
		printf("Não apto.\n");
	 }
	} else {
		printf("Não apto.\n");
	}
}
int main(void) {
	int idade, altura, sexo;

	//Solicitar informações do usuário
	printf("Digite a idade do candidato: ");
	scanf("%d", &idade);

	printf("Digite a altura do candidato: ");
	scanf("%d", &altura);

	printf("Digite o sexo do candidato (Feminino=1, Masculino=2): ");
	scanf("%d", &sexo);

	//Chamar a funçaõ para validar a situação e imprimir o resultado
	validarSituacao(idade,altura, sexo);

	return 0;
}

