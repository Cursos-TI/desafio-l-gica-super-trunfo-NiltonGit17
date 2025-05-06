#include <stdio.h>

int main() {
    
    // Cadastro da primeira cidade
    char estado1[70];
    char codigo1[17];
    char nome1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Cadastro da segunda cidade
    char estado2[35];
    char codigo2[34];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // --- Cadastro da primeira cidade ---
    printf("Cadastro da Cidade 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // --- Cadastro da segunda cidade ---
    printf("\nCadastro da Cidade 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // --- Apresentação dos dados das cartas ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    // --- Comparação por PIB (critério escolhido) ---
    printf("\n--- COMPARAÇÃO POR PIB ---\n");
    if (pib1 > pib2) {
        printf("Cidade vencedora: %s (maior PIB)\n", nome1);
    } else if (pib2 > pib1) {
        printf("Cidade vencedora: %s (maior PIB)\n", nome2);
    } else {
        printf("Empate! Ambas têm o mesmo PIB.\n");
    }

    return 0;
}
