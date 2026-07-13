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

    // Variáveis para o Menu e Lógica Mestre
    int opcao1, opcao2;
    float val1_carta1, val1_carta2;
    float val2_carta1, val2_carta2;
    int pontos_carta1 = 0, pontos_carta2 = 0;

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

    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;
    printf("\n");

    // ==========================================
    // Menus Dinâmicos (Nível Mestre)
    // ==========================================
    printf("=== Menu de Batalha (Nível Mestre) ===\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("Opção 1: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    printf("Opção 2: ");
    scanf("%d", &opcao2);

    // Estrutura de decisão para barrar atributos iguais
    if (opcao1 == opcao2) {
        printf("\nErro: Você escolheu o mesmo atributo duas vezes! O jogo foi cancelado.\n");
        return 0; // Encerra o programa
    }

    // ==========================================
    // Extraindo valores do 1º Atributo
    // ==========================================
    switch (opcao1) {
        case 1: val1_carta1 = populacao1; val1_carta2 = populacao2; break;
        case 2: val1_carta1 = area1; val1_carta2 = area2; break;
        case 3: val1_carta1 = pib1; val1_carta2 = pib2; break;
        case 4: val1_carta1 = pontos_turisticos1; val1_carta2 = pontos_turisticos2; break;
        case 5: val1_carta1 = densidade1; val1_carta2 = densidade2; break;
        default: printf("Opção 1 inválida!\n"); return 0;
    }

    // ==========================================
    // Extraindo valores do 2º Atributo
    // ==========================================
    switch (opcao2) {
        case 1: val2_carta1 = populacao1; val2_carta2 = populacao2; break;
        case 2: val2_carta1 = area1; val2_carta2 = area2; break;
        case 3: val2_carta1 = pib1; val2_carta2 = pib2; break;
        case 4: val2_carta1 = pontos_turisticos1; val2_carta2 = pontos_turisticos2; break;
        case 5: val2_carta1 = densidade1; val2_carta2 = densidade2; break;
        default: printf("Opção 2 inválida!\n"); return 0;
    }

    // ==========================================
    // Lógica de Decisão Complexa + Operador Ternário
    // Sintaxe do Ternário: (condição) ? valor_se_verdadeiro : valor_se_falso;
    // ==========================================
    
    // Processando pontos do 1º Atributo (Se for densidade, a regra inverte: menor ganha)
    pontos_carta1 += (opcao1 == 5) ? (val1_carta1 < val1_carta2 ? 1 : 0) : (val1_carta1 > val1_carta2 ? 1 : 0);
    pontos_carta2 += (opcao1 == 5) ? (val1_carta2 < val1_carta1 ? 1 : 0) : (val1_carta2 > val1_carta1 ? 1 : 0);

    // Processando pontos do 2º Atributo
    pontos_carta1 += (opcao2 == 5) ? (val2_carta1 < val2_carta2 ? 1 : 0) : (val2_carta1 > val2_carta2 ? 1 : 0);
    pontos_carta2 += (opcao2 == 5) ? (val2_carta2 < val2_carta1 ? 1 : 0) : (val2_carta2 > val2_carta1 ? 1 : 0);

    // ==========================================
    // Exibição Final com If/Else Aninhados
    // ==========================================
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Análise do 1º Atributo: Carta 1 (%.2f) vs Carta 2 (%.2f)\n", val1_carta1, val1_carta2);
    printf("Análise do 2º Atributo: Carta 1 (%.2f) vs Carta 2 (%.2f)\n", val2_carta1, val2_carta2);
    printf("\nPontuação Total:\nCarta 1 (%s): %d ponto(s)\nCarta 2 (%s): %d ponto(s)\n\n", nome1, pontos_carta1, nome2, pontos_carta2);

    if (pontos_carta1 > pontos_carta2) {
        printf("🏆 GRANDE VENCEDORA: Carta 1 (%s)!\n", nome1);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("🏆 GRANDE VENCEDORA: Carta 2 (%s)!\n", nome2);
    } else {
        // Bloco aninhado para tratar o empate
        if (pontos_carta1 == pontos_carta2) {
            printf("⚖️ DEU EMPATE! Ambas as cartas venceram em 1 atributo.\n");
        }
    }

    return 0;
}