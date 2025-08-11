#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Angelo

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis da carta 1
    char estado1;
    char codigo1[4];  // Ex: A01 -> 3 caracteres + '\0'
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até a quebra de linha

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Declaração de Variaveis após a entrada de dados(Calculos)

    // Calculo Carta 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float inversoDensidade1 = (densidadePopulacional1 != 0) ? (1.0f / densidadePopulacional1) : 0.0f;
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

    // Calculo Carta 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float inversoDensidade2 = (densidadePopulacional2 != 0) ? (1.0f / densidadePopulacional2) : 0.0f;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n=== Comparação das Cartas ===\n");
    printf("População: Carta 1 vence? %d \n", populacao1 > populacao2);
    printf("Área: Carta 1 vence? %d \n", area1 > area2);
    printf("PIB: Carta 1 vence? %d \n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 vence? %d \n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 vence? %d \n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per Capita: Carta 1 vence? %d \n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 vence? %d \n", superPoder1 > superPoder2);

    return 0;
}
