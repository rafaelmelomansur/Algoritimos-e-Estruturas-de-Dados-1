#include <stdio.h>

int main() {
    char resultados[6]; // Array para armazenar os resultados dos jogos
    int vitorias = 0;    // Contador de vitórias
    int i;

    printf("Digite V se venceu ou P se perdeu cada uma das 6 partidas:\n");

    // Lê os resultados dos jogos
    for (i = 0; i < 6; i++) {
        printf("Resultado da partida %d: ", i+1);
        scanf(" %c", &resultados[i]); // Lê o resultado da partida (V ou P)

        // Verifica se a entrada é válida (deve ser V ou P)
        while (resultados[i] != 'V' && resultados[i] != 'P') {
            printf("Por favor, digite apenas V se venceu ou P se perdeu: ");
            scanf(" %c", &resultados[i]);
        }

        if (resultados[i] == 'V') {
            vitorias++;
        }
    }

    // Determina o grupo com base no número de vitórias
    if (vitorias >= 5) {
        printf("Grupo 1\n"); // Grupo 1
    } else if (vitorias >= 3) {
        printf("Grupo 2\n"); // Grupo 2
    } else if (vitorias >= 1) {
        printf("Grupo 3\n"); // Grupo 3
    } else {
        printf("Não convidado\n"); // Não convidado
    }

    return 0;
}
