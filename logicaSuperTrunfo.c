#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado;
    char codigo[4]; 
    char cidade[30];
    unsigned long int populacao;
    float area;
    float pib;
    int turista; // qtd de pontos turísticos da 1a carta
    float pibpc; // variável para o PIB per capita da 1a carta
    float dp; // densidade populacional para a 1a carta
    float superpoder;


    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turista1; // qtd de pontos turísticos da 2a carta
    float pibpc1; // variável para o PIB per capita da 2a carta
    float dp1; // densidade populacional para a 2a carta
    float superpoder1;


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Digite os dados para a carta 1: \n");
    printf("Digite um dos 8 estados usando uma letra de 'A' a 'H' para representá-lo: ");
    scanf(" %c", &estado); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 para ser o código da carta: ");
    scanf("%s", codigo); 

    printf("Digite o nome da cidade (não use espaços): ");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turista);

    pibpc = pib / populacao; // cálculo do PIB per capita da carta 0

    dp = populacao / area; // densidade populacional da carta 0

    superpoder = populacao + area + pib + turista + pibpc + (1/dp); // cálculo super poder carta 0
    
    printf("\nDigite os dados para a carta 2: \n");
    printf("Digite um dos 8 estados usando uma letra de 'A' a 'H' para representá-lo: ");
    scanf(" %c", &estado1); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 para ser o código da carta: ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade (não use espaços): ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turista1);
    
    pibpc1 = pib1 / populacao1; // cálculo do PIB per capita da carta 1

    dp1 = populacao1 / area1; // densidade populacional da carta 1

    superpoder1 = populacao1 + area1 + pib1 + turista1 + pibpc1 + (1/dp1); // cálculo super poder da carta 1


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", estado, codigo, cidade, populacao, area, pib, turista, dp, pibpc); // exibição dos dados carta 0

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turista1, dp1, pibpc1); // exibição dos dados carta 1


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao > populacao1){
        printf("\nCidade 1 tem maior população.\n");
    } else {
        printf("\nCidade 2 tem maior população.\n");
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\nComparação de cartas (Atributo - População):\nCarta 1 - %s: %lu\nCarta 2 - %s: %lu\n", cidade, populacao, cidade1, populacao1);

    if (populacao > populacao1){
        printf("A cidade vencedora é: %s\n", cidade);
    } else {
        printf("A cidade vencedora é: %s\n", cidade1);
    }


    return 0;
}