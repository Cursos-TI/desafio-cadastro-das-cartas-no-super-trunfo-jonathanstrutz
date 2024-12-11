#include <stdio.h>
#include <string.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para representar uma carta de cidade
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCartas(Cidade cartas[NUM_ESTADOS][NUM_CIDADES]) {
    char estados[] = "ABCDEFGH";
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            // Gerar código da cidade
            printf(cartas[i][j].codigo, "%c%02d", estados[i], j + 1);

            // Solicitar informações ao usuário
            printf("\nCadastrando a cidade %s:\n", cartas[i][j].codigo);
            printf("Digite a populacao: ");
            scanf("%d", &cartas[i][j].populacao);

            printf("Digite a area (em km^2): ");
            scanf("%f", &cartas[i][j].area);

            printf("Digite o PIB (em bilhoes): ");
            scanf("%f", &cartas[i][j].pib);

            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &cartas[i][j].pontos_turisticos);
        }
    }
}

void exibirCartas(Cidade cartas[NUM_ESTADOS][NUM_CIDADES]) {
    printf("\n================= Cartas Cadastradas =================\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("\nCidade %s:\n", cartas[i][j].codigo);
            printf("Populacao: %d\n", cartas[i][j].populacao);
            printf("Area: %.2f km^2\n", cartas[i][j].area);
            printf("PIB: %.2f bilhoes\n", cartas[i][j].pib);
            printf("Pontos Turisticos: %d\n", cartas[i][j].pontos_turisticos);
        }
    }
}

int main() {
    Cidade cartas[NUM_ESTADOS][NUM_CIDADES];

    printf("=== Sistema de Cadastro de Cartas - Super Trunfo ===\n");

    cadastrarCartas(cartas);
    exibirCartas(cartas);

    return 0;
}
