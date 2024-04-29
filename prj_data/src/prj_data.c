#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum DiaSemana {
    DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO
};

int main(void) {
    // Obter a data atual
    time_t rawtime;
    struct tm *info;
    time(&rawtime);
    info = localtime(&rawtime);

    // Extrair o dia da semana atual
    int dia_atual = info->tm_wday;

    // Declaração de uma variável do tipo enum DiaSemana
    enum DiaSemana hoje;

    // Definir o valor de 'hoje' baseado no dia atual
    switch (dia_atual) {
        case 0:
            hoje = DOMINGO;
            break;
        case 1:
            hoje = SEGUNDA;
            break;
        case 2:
            hoje = TERCA;
            break;
        case 3:
            hoje = QUARTA;
            break;
        case 4:
            hoje = QUINTA;
            break;
        case 5:
            hoje = SEXTA;
            break;
        case 6:
            hoje = SABADO;
            break;
        default:
            hoje = DOMINGO; // Tratamento padrão, caso algo dê errado
            break;
    }

    // Uso do enum em uma estrutura de controle (switch)
    switch (hoje) {
        case DOMINGO:
            printf("Hoje é domingo.\n");
            break;
        case SEGUNDA:
            printf("Hoje é segunda-feira.\n");
            break;
        case TERCA:
            printf("Hoje é terça-feira.\n");
            break;
        case QUARTA:
            printf("Hoje é quarta-feira.\n");
            break;
        case QUINTA:
            printf("Hoje é quinta-feira.\n");
            break;
        case SEXTA:
            printf("Hoje é sexta-feira.\n");
            break;
        case SABADO:
            printf("Hoje é sábado.\n");
            break;
        default:
            printf("Dia desconhecido.\n");
            break;
    }

    return 0;
}
