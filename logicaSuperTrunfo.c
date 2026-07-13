#include <stdio.h>

int main() {
    // ==========================================
    // Variáveis da Carta 1
    // ==========================================
    char estado1[3];
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // ==========================================
    // Variáveis da Carta 2
    // ==========================================
    char estado2[3];
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // ==========================================
    // Cadastro da Carta 1
    // ==========================================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (Ex: SP, RJ): ");
    scanf("%s", estado1);
    
    printf("Código da Carta (Ex: A01, B02): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // O espaço antes do % permite ler nomes com espaços
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;

    printf("\n");

    // ==========================================
    // Cadastro da Carta 2
    // ==========================================
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (Ex: SP, RJ): ");
    scanf("%s", estado2);
    
    printf("Código da Carta (Ex: A01, B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;

    printf("\n");

    // ==========================================
    // Comparação de Cartas (Atributo: População)
    // ==========================================
    printf("=== Comparação de cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);

    // Lógica para determinar a vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}