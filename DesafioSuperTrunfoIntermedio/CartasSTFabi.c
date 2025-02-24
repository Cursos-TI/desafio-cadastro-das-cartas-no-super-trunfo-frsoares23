#include <stdio.h>

int main() {
    char estados1[2], estados2[2];
    char cidade1[3], cidade2[3];
    char nomedacidade1[100], nomedacidade2[100];
    float populacao1, populacao2;
    float area1, area2; // em km2
    float pib1, pib2; // em bilhões
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2; // habitantes/km2
    float pibpercapta1, pibpercapta2;
    float superpoder1, superpoder2;

    // Coletando as Informações da Carta 01
    printf("Carta 01\n");
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%s", &estados1); // Estado para a carta 1

    printf("Cidade (01, 02, 03, 04): ");
    scanf("%s", &cidade1); // Cidade para a carta 1

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade1); // nome da cidade

    printf("População: ");
    scanf("%f", &populacao1); // população

    printf("Área: ");
    scanf("%f", &area1); // área em km²

    printf("PIB: ");
    scanf("%f", &pib1); // PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1); // pontos turísticos

    //Calculando a Densidade Populacional (hab/km2)
    densidade1 = (float)populacao1 / area1; 

    //Calculando o PIB per capta
    pibpercapta1 = (float)pib1 * 1000000001 / populacao1; // PIB em bilhões, multiplicado por 1 bilhão

    //Calculando o Super Poder
    superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + 1/densidade1);

    // Coletando as Informações da Carta 02
    printf("Carta 02\n");
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%s", &estados2); // Estado para a carta 2

    printf("Cidade (01, 02, 03, 04): ");
    scanf("%s", &cidade2); // Cidade para a carta 2

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade2); // nome da cidade

    printf("População: ");
    scanf("%f", &populacao2); // população

    printf("Área: ");
    scanf("%f", &area2); // área em km²

    printf("PIB: ");
    scanf("%f", &pib2); // PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2); // pontos turísticos

    //Calculando a Densidade Populacional (hab/km2)
    densidade2 = (float)populacao2 / area2; 

    //Calculando o PIB per capta
    pibpercapta2= (float)pib2 * 1000000002 / populacao2; // PIB em bilhões, multiplicado por 1 bilhão

    //Calculando o Super Poder
    superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + 1/densidade2);

    // Exibindo as informações da Carta 01
    printf("\n***Informações da Carta 01:***\n");
    printf("Estado: %s\n", estados1);
    printf("Cidade: %s\n", cidade1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional Carta 1: %.2f hab/km²\n", densidade1);
    printf("PIB per Capta Carta 1: %.2f\n", pibpercapta1);
    printf("Super Poder Carta 1: %.2f\n", superpoder1);

    // Exibindo as informações da Carta 02
    printf("\n***Informações da Carta 02:***\n");
    printf("Estado: %s\n", estados2);
    printf("Cidade: %s\n", cidade2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidade2);
    printf("PIB per Capta Carta 2: %.2f\n", pibpercapta2);
    printf("Super Poder Carta 2: %.2f\n", superpoder2);

    //COMPARAÇÕES COM OPERADORES RELACIONAIS
    // Comparando populações
    printf("\n***Comparando Cartas***\n"):
    printf("População: %s venceu\n", (populacao1 >= populacao2) ? "Cidade 1" : "Cidade 2");
    // Comparando áreas
    printf("Área: %s venceu\n", (area1 >= area2) ? "Cidade 1" : "Cidade 2");
    // Comparando PIBs
    printf("PIB: %s venceu\n", (pib1 >= pib2) ? "Cidade 1" : "Cidade 2");
    // Comparando pontos turísticos
    printf("Pontos Turísticos: %s venceu\n", (pontosturisticos1 >= pontosturisticos2) ? "Cidade 1" : "Cidade 2");
    // Comparando densidade populacional
    printf("Densidade Populacional: %s venceu\n", (densidade1 >= densidade2) ? "Cidade 1" : "Cidade 2");
    // Comparando PIB per capita
    printf("PIB per capita: %s venceu\n", (pibpercapta1 >= pibpercapta2) ? "Cidade 1" : "Cidade 2");
    // Comparando super poder
    printf("Super Poder: %s venceu\n", (superpoder1 >= superpoder2) ? "Cidade 1" : "Cidade 2");

    return 0;
}