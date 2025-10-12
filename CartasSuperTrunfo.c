#include <stdio.h>

int main() {
    // ---------------- DADOS DA CARTA 1 ----------------
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // ---------------- DADOS DA CARTA 2 ----------------
    char estado2 = 'B';
    char codigo2[4] = "B03";
    char cidade2[50] = "Curitiba";
    int populacao2 = 1964000;
    float area2 = 435.04;
    float pib2 = 120.56;
    int pontosTuristicos2 = 25;

    printf("===== SUPER TRUNFO - CIDADES BRASILEIRAS =====\n\n");

    // ---------------- EXIBIÇÃO DAS CARTAS ----------------
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos2);

    // ---------------- COMPARAÇÃO AUTOMÁTICA ----------------
    printf("===== RESULTADO DAS COMPARAÇÕES =====\n\n");

    // População
    if (populacao1 > populacao2)
        printf("População: %s vence (%d habitantes contra %d)\n", cidade1, populacao1, populacao2);
    else if (populacao2 > populacao1)
        printf("População: %s vence (%d habitantes contra %d)\n", cidade2, populacao2, populacao1);
    else
        printf("População: Empate! Ambas têm %d habitantes.\n", populacao1);

    // Área
    if (area1 > area2)
        printf("Área: %s vence (%.2f km² contra %.2f km²)\n", cidade1, area1, area2);
    else if (area2 > area1)
        printf("Área: %s vence (%.2f km² contra %.2f km²)\n", cidade2, area2, area1);
    else
        printf("Área: Empate! Ambas têm %.2f km².\n", area1);

    // PIB
    if (pib1 > pib2)
        printf("PIB: %s vence (%.2f bi contra %.2f bi)\n", cidade1, pib1, pib2);
    else if (pib2 > pib1)
        printf("PIB: %s vence (%.2f bi contra %.2f bi)\n", cidade2, pib2, pib1);
    else
        printf("PIB: Empate! Ambas têm %.2f bilhões.\n", pib1);

    // Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: %s vence (%d contra %d)\n", cidade1, pontosTuristicos1, pontosTuristicos2);
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Pontos Turísticos: %s vence (%d contra %d)\n", cidade2, pontosTuristicos2, pontosTuristicos1);
    else
        printf("Pontos Turísticos: Empate! Ambas têm %d pontos.\n", pontosTuristicos1);

    printf("\n===== FIM DO JOGO =====\n");

    return 0;
}

      
  
