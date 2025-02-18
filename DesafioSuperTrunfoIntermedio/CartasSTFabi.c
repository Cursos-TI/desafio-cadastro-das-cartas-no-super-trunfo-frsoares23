#include <stdio.h>

int main() {
    // Arrays de strings
    char estados[4][3] = {"A", "B", "C", "D", "E","F","G","H"};
    char codigodacarta[4][3] = {"01", "02", "03", "04"};
    char nomedacidade[100];
    int populacao;
    float area; // em km2
    float pib; // em bilhões
    int pontosturisticos;
    float densidade; // habitantes/km2
    float pibpercapta;

    // Coletando as Informações
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%s", &estados); // Lê o nome do estado (uma string)

    printf("Carta (01, 02, 03, 04): ");
    scanf("%s", &codigodacarta); // Lê o código da carta (uma string)

    printf("Cidade: ");
    scanf(" %[^\n]", nomedacidade); // Lê o nome da cidade

    printf("População: ");
    scanf("%d", &populacao); // Lê a população

    printf("Área: ");
    scanf("%f", &area); // Lê a área em km²

    printf("PIB: ");
    scanf("%f", &pib); // Lê o PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos); // Lê o número de pontos turísticos

    //Calculando a Densidade Populacional (hab/km2)
    densidade = populacao / area; 

    //Calculando o PIB per capta
    pibpercapta = pib * 1000000000 / populacao; // PIB em bilhões, multiplicado por 1 bilhão

    // Exibindo as informações da carta
    printf("\n***Informações da Carta:***\n");
    printf("Estado: %s\n", estados);
    printf("Carta: %s\n", codigodacarta);
    printf("Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    
    //Incluindo a Densidade Populacional e o PIB per capta
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capta: %.2f", pibpercapta);
    
    return 0;
}