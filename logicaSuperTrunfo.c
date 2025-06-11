#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    int populacao1, pontos_turisticos1;
    float area1, PIB_per_capita1;
    float pib1, Densidade_populacional1;
    char cidade1[100], estado1[100], codigo_da_carta1[100];

    int populacao2, pontos_turisticos2;
    float area2, PIB_per_capita2;
    float pib2, Densidade_populacional2;
    char cidade2[100], estado2[100], codigo_da_carta2[100];
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, 100, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove o \n

    printf("Digite o nome do estado:\n");
    fgets(estado1, 100, stdin);
    estado1[strcspn(estado1, "\n")] = '\0'; // remove o \n

    printf("Digite o nome do codigo da carta:\n");
    scanf("%99s", codigo_da_carta1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Cálculo da densidade populacional
    printf("densidade_populacional1 = populacao1 / area1;\n");
    // A densidade populacional é calculada como população dividida pela área
    Densidade_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", Densidade_populacional1);
    printf("\n");

    // Cálculo do PIB per capita

    printf(" PIB_per_capita1 = pib1 / populacao1;\n");
    PIB_per_capita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("\n");

    //  Carta 1
    printf("Carta1\nCidade: %s\nEstado: %s\nCodigo da carta: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %f\nPIB per capita: %.2f\n",
           cidade1, estado1, codigo_da_carta1, populacao1, area1, pib1, pontos_turisticos1, Densidade_populacional1, PIB_per_capita1);
    printf("\n");
    
    getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
    // Cadastro da carta 2
    printf("Digite o nome da cidade:\n");
    fgets(cidade2, 100, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite o nome do estado:\n");
    fgets(estado2, 100, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o codigo da carta:\n");
    scanf("%99s", codigo_da_carta2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Cálculo da densidade populacional
    printf("densidade_populacional2 = populacao2 / area2;\n");
    Densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", Densidade_populacional2);
    printf("\n");

    // Cálculo do PIB per capita
    printf(" PIB_per_capita2 = pib2 / populacao2;\n");
    PIB_per_capita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("\n");

    // Carta 2
    printf("Carta2\nCidade: %s\nEstado: %s\nCodigo da carta: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %f\nPIB per capita: %.2f\n",
           cidade2, estado2, codigo_da_carta2, populacao2, area2, pib2, pontos_turisticos2, Densidade_populacional2, PIB_per_capita2);
    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (populacao1 > populacao2)
    {
        printf("Cidade 1 tem maior população.\n");
    }
    else if (populacao1 < populacao2)
    {
        printf("Cidade 2 tem maior população.\n");
    }
    else
    {
        printf("As cidades têm a mesma população.\n");
    }
    if (area1 > area2)
    {
        printf("Cidade 1 tem maior área.\n");
    }
    else if (area1 < area2)
    {
        printf("Cidade 2 tem maior área.\n");
    }
    else
    {
        printf("As cidades têm a mesma área.\n");
    }
    if (pib1 > pib2)
    {
        printf("Cidade 1 tem maior PIB.\n");
    }
    else if (pib1 < pib2)
    {
        printf("Cidade 2 tem maior PIB.\n");
    }
    else
    {
        printf("As cidades têm o mesmo PIB.\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2)
    {
        printf("Cidade 1 tem mais pontos turísticos.\n");
    }
    else if (pontos_turisticos1 < pontos_turisticos2)
    {
        printf("Cidade 2 tem mais pontos turísticos.\n");
    }
    else
    {
        printf("As cidades têm o mesmo número de pontos turísticos.\n");
    }
    if (Densidade_populacional1 > Densidade_populacional2)
    {
        printf("Cidade 1 tem maior densidade populacional.\n");
    }
    else if (Densidade_populacional1 < Densidade_populacional2)
    {
        printf("Cidade 2 tem maior densidade populacional.\n");
    }
    else
    {
        printf("As cidades têm a mesma densidade populacional.\n");
    }
    if (PIB_per_capita1 > PIB_per_capita2)
    {
        printf("Cidade 1 tem maior PIB per capita.\n");
    }
    else if (PIB_per_capita1 < PIB_per_capita2)
    {
        printf("Cidade 2 tem maior PIB per capita.\n");
    }
    else
    {
        printf("As cidades têm o mesmo PIB per capita.\n");
    }
    //Determinar carta vencedora
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
