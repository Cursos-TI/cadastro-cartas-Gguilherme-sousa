#include <stdio.h>
#include <string.h>

#define TOTAL_ESTADOS 8
#define CIDADES_POR_ESTADO 4
#define TOTAL_CARTAS (TOTAL_ESTADOS * CIDADES_POR_ESTADO)

typedef struct {
    char codigo[4];          // Ex: A01, B04, etc.
    char estado[50];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta cartas[TOTAL_CARTAS];
    char estados[TOTAL_ESTADOS][50] = {
        "São Paulo", "Rio de Janeiro", "Minas Gerais", "Bahia",
        "Paraná", "Pernambuco", "Rio Grande do Sul", "Ceará"
    };

    char cidades[TOTAL_ESTADOS][CIDADES_POR_ESTADO][50] = {
        {"São Paulo", "Campinas", "Santos", "Ribeirão Preto"},
        {"Rio de Janeiro", "Niterói", "Petrópolis", "Volta Redonda"},
        {"Belo Horizonte", "Uberlândia", "Juiz de Fora", "Ouro Preto"},
        {"Salvador", "Feira de Santana", "Porto Seguro", "Ilhéus"},
        {"Curitiba", "Londrina", "Maringá", "Cascavel"},
        {"Recife", "Olinda", "Caruaru", "Petrolina"},
        {"Porto Alegre", "Caxias do Sul", "Pelotas", "Santa Maria"},
        {"Fortaleza", "Juazeiro do Norte", "Sobral", "Crato"}
    };

    char letrasEstados[TOTAL_ESTADOS] = {'A','B','C','D','E','F','G','H'};
    int i, j, contador = 0;

    printf("========================================\n");
    printf("     🃏 SUPER TRUNFO - PAISES (Nível Novato)\n");
    printf("========================================\n\n");

    // Cadastro automático (com entrada manual apenas dos valores numéricos)
    for (i = 0; i < TOTAL_ESTADOS; i++) {
        for (j = 0; j < CIDADES_POR_ESTADO; j++) {
            sprintf(cartas[contador].codigo, "%c%02d", letrasEstados[i], j + 1);
            strcpy(cartas[contador].estado, estados[i]);
            strcpy(cartas[contador].cidade, cidades[i][j]);

            printf("\nCadastro da cidade: %s (%s)\n", cartas[contador].cidade, cartas[contador].estado);
            printf("Código da carta: %s\n", cartas[contador].codigo);

            printf("População (em milhões): ");
            scanf("%f", &cartas[contador].populacao);

            printf("Área (em km²): ");
            scanf("%f", &cartas[contador].area);

            printf("PIB (em bilhões): ");
            scanf("%f", &cartas[contador].pib);

            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[contador].pontosTuristicos);

            contador++;
        }
    }

    printf("\n========================================\n");
    printf("     🗺️  CARTAS CADASTRADAS\n");
    printf("========================================\n");

    for (i = 0; i < TOTAL_CARTAS; i++) {
        printf("\n----------------------------\n");
        printf("Código: %s\n", cartas[i].codigo);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Cidade: %s\n", cartas[i].cidade);
        printf("População: %.2f milhões\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    printf("\n========================================\n");
    printf("Cadastro concluído com sucesso! ✅\n");
    printf("========================================\n");

    return 0;
}
