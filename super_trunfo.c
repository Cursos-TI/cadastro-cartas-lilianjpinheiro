#include <stdio.h>

int main() {
    // Variáveis para os dados da primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, numPontosTuristicos1;
    float area1, pib1, densidade1, pibpercapta1;

    // Variáveis para os dados da segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, numPontosTuristicos2;
    float area2, pib2, densidade2, pibpercapta2;

    // Instruções iniciais
    printf("Cadastro de Cartas do Super Trunfo\n");
    printf("-----------------------------------\n");
    printf("\n");

    // Entrada dos dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // espaço antes do %c para ignorar espaços em branco

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê string com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);


    // Entrada dos dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("\n");

    printf("Estado (letra de A a H): ");
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
    scanf("%d", &numPontosTuristicos2);

    /*---------Calculos---------*/
    //Densidade = População / área
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //PIB per capta = (PIB em bilhões * 1.000.000.000) / população
    pibpercapta1 = (pib1 * 1000000000.0f) / (float) populacao1;
    pibpercapta2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // Exibição dos dados das cartas

    printf ("\n===== CARTAS CADASTRADAS =====\n");


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capta: %.2f reais\n", pibpercapta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capta: %.2f reais\n", pibpercapta2);
     
    return 0;
}