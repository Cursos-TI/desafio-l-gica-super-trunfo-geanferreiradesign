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

    // Variável para o Menu
    int opcao;

    // ==========================================
    // Cadastro da Carta 1
    // ==========================================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (Ex: SP, RJ): ");
    scanf("%s", estado1);
    
    printf("Código da Carta (Ex: A01, B02): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); 
    
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
    // Menu Interativo
    // ==========================================
    printf("=== Menu de Comparação ===\n");
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (Menor vence!)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n");

    // ==========================================
    // Lógica de Comparação com Switch
    // ==========================================
    switch (opcao) {
        case 1:
            printf("--- Comparação de cartas (Atributo: População) ---\n");
            printf("Carta 1 - %s: %d\n", nome1, populacao1);
            printf("Carta 2 - %s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("--- Comparação de cartas (Atributo: Área) ---\n");
            printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("--- Comparação de cartas (Atributo: PIB) ---\n");
            printf("Carta 1 - %s: %.2f\n", nome1, pib1);
            printf("Carta 2 - %s: %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("--- Comparação de cartas (Atributo: Pontos Turísticos) ---\n");
            printf("Carta 1 - %s: %d\n", nome1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("--- Comparação de cartas (Atributo: Densidade Populacional) ---\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nome1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nome2, densidade2);
            // ATENÇÃO: Aqui a lógica inverte, o MENOR vence!
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 5 no menu.\n");
            break;
    }

    return 0;
}