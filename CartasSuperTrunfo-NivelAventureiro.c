#include <stdio.h>

int main() {
    // ---------------- DECLARAÇÃO DAS VARIÁVEIS ----------------
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ---------------- ENTRADA DE DADOS ----------------
    printf("===== CADASTRO DAS CARTAS - SUPER TRUNFO =====\n\n");

    printf("=== Carta 1 ===\n");
    printf("Informe o estado (letra): ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta: ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Informe o estado (letra): ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta: ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ---------------- CÁLCULOS ----------------
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em bilhões -> reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ---------------- SAÍDA DE RESULTADOS ----------------
    printf("\n\n===== RESULTADOS =====\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n===== FIM DO PROGRAMA =====\n");

    return 0;
}
