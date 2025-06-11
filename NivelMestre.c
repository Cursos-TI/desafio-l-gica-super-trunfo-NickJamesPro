#include <stdio.h>
#include <string.h>

int main()
{
    int populacao1, pontos_turisticos1;
    float area1, PIB_per_capita1, pib1, Densidade_populacional1;
    char cidade1[100], estado1[100], codigo_da_carta1[100];

    int populacao2, pontos_turisticos2;
    float area2, PIB_per_capita2, pib2, Densidade_populacional2;
    char cidade2[100], estado2[100], codigo_da_carta2[100];

    // Cadastro Carta 1
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, 100, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite o nome do estado:\n");
    fgets(estado1, 100, stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo_da_carta1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    Densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = pib1 / populacao1;

    printf("Carta1\nCidade: %s\nEstado: %s\nCodigo da carta: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %f\nPIB per capita: %.2f\n",
           cidade1, estado1, codigo_da_carta1, populacao1, area1, pib1, pontos_turisticos1, Densidade_populacional1, PIB_per_capita1);
    printf("\n");

    getchar(); // limpa buffer

    // Cadastro Carta 2
    printf("\nDigite o nome da cidade:\n");
    fgets(cidade2, 100, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o nome do estado:\n");
    fgets(estado2, 100, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo_da_carta2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    Densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = pib2 / populacao2;

    printf("Carta2\nCidade: %s\nEstado: %s\nCodigo da carta: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %f\nPIB per capita: %.2f\n",
           cidade2, estado2, codigo_da_carta2, populacao2, area2, pib2, pontos_turisticos2, Densidade_populacional2, PIB_per_capita2);
    printf("\n");

    // Menu interativo
    int escolha1 = 0, escolha2 = 0;
    int opcoes_disponiveis[6] = {1, 1, 1, 1, 1, 1}; // indica se opção está disponível

    float valor1_a = 0, valor2_a = 0;
    float valor1_b = 0, valor2_b = 0;
    int pontos1 = 0, pontos2 = 0;

    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. PIB per capita\n");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1: valor1_a = populacao1; valor2_a = populacao2; break;
        case 2: valor1_a = area1; valor2_a = area2; break;
        case 3: valor1_a = pib1; valor2_a = pib2; break;
        case 4: valor1_a = pontos_turisticos1; valor2_a = pontos_turisticos2; break;
        case 5: valor1_a = Densidade_populacional1; valor2_a = Densidade_populacional2; break;
        case 6: valor1_a = PIB_per_capita1; valor2_a = PIB_per_capita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }
    opcoes_disponiveis[escolha1 - 1] = 0; // marcar como escolhida

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 0; i < 6; i++) {
        if (opcoes_disponiveis[i]) {
            printf("%d. ", i + 1);
            switch (i + 1) {
                case 1: printf("População\n"); break;
                case 2: printf("Área\n"); break;
                case 3: printf("PIB\n"); break;
                case 4: printf("Pontos Turísticos\n"); break;
                case 5: printf("Densidade Demográfica\n"); break;
                case 6: printf("PIB per capita\n"); break;
            }
        }
    }
    scanf("%d", &escolha2);

    if (!opcoes_disponiveis[escolha2 - 1]) {
        printf("Erro: você escolheu um atributo repetido!\n");
        return 1;
    }

    switch (escolha2) {
        case 1: valor1_b = populacao1; valor2_b = populacao2; break;
        case 2: valor1_b = area1; valor2_b = area2; break;
        case 3: valor1_b = pib1; valor2_b = pib2; break;
        case 4: valor1_b = pontos_turisticos1; valor2_b = pontos_turisticos2; break;
        case 5: valor1_b = Densidade_populacional1; valor2_b = Densidade_populacional2; break;
        case 6: valor1_b = PIB_per_capita1; valor2_b = PIB_per_capita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparação do primeiro atributo
    printf("\n--- COMPARAÇÃO DOS ATRIBUTOS ---\n");

    printf("\nAtributo 1: ");
    switch (escolha1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per capita\n"); break;
    }
    printf("%s: %.2f\n", estado1, valor1_a);
    printf("%s: %.2f\n", estado2, valor2_a);

    if (escolha1 == 5) {
        if (valor1_a < valor2_a) pontos1++;
        else if (valor1_a > valor2_a) pontos2++;
    } else {
        if (valor1_a > valor2_a) pontos1++;
        else if (valor1_a < valor2_a) pontos2++;
    }

    printf("\nAtributo 2: ");
    switch (escolha2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per capita\n"); break;
    }
    printf("%s: %.2f\n", estado1, valor1_b);
    printf("%s: %.2f\n", estado2, valor2_b);

    if (escolha2 == 5) {
        if (valor1_b < valor2_b) pontos1++;
        else if (valor1_b > valor2_b) pontos2++;
    } else {
        if (valor1_b > valor2_b) pontos1++;
        else if (valor1_b < valor2_b) pontos2++;
    }

    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s: %d ponto(s)\n", estado1, pontos1);
    printf("%s: %d ponto(s)\n", estado2, pontos2);

    if (pontos1 > pontos2) {
        printf("A carta vencedora é: Carta 1 %s, %s\n", cidade1, estado1);
    } else if (pontos2 > pontos1) {
        printf("A carta vencedora é: Carta 2 %s, %s\n", cidade2, estado2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
