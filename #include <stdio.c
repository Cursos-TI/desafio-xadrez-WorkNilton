#include <stdio.h>

// Quantidade de casas que cada peça vai se mover
#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8


// Função: Simula o movimento da Torre

void simularTorre() {
    printf("= Torre =\n");
    printf("Movimento: %d casas para a direita\n", CASAS_TORRE);

    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");
}


// Função: Simula o movimento do Bispo

void simularBispo() {
    printf("= Bispo =\n");
    printf("Movimento: %d casas na diagonal para cima e à direita\n", CASAS_BISPO);

    int i = 1;
    while (i <= CASAS_BISPO) {
        printf("Casa %d: Cima Direita\n", i);
        i++;
    }

    printf("\n");
}


// Função: Simula o movimento da Rainha

void simularRainha() {
    printf("= Rainha =\n");
    printf("Movimento: %d casas para a esquerda\n", CASAS_RAINHA);

    int i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= CASAS_RAINHA);

    printf("\n");
}


// Função principal

int main() {
    printf("=\n");
    printf("  Simulador de Movimentos de Peças de Xadrez \n");
    printf("=\n\n");

    simularTorre();   // Usando for
    simularBispo();   // Usando while
    simularRainha();  // Usando do-while

    printf("Simulação concluída.\n");
    return 0;
}