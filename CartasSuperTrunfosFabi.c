#include <stdio.h>

int main(){
    printf("DESAFIO CARTAS SUPER TRUNFO \n");

    char nomedopais[], estados[9];
    int cidades[5];
    int populacao;
    float areaemkm2;
    double pib;
    int pontosturisticos;

    printf("Nome do País: \n");
    scanf("%s", &nomedopais);

    printf("Estado: \n");
    scanf("%s", &estados);

    printf("Cidades: \n");
    scanf("%d", &cidades);

    printf("População: \n");
    scanf("%d%c", &populacao);

    printf("Área em KM: \n");
    scanf("%f%c", &areaemkm2);

    printf("PIB: \n");
    scanf("%f%c", &pib);

    printf("Pontos Turísticos: \n");
    scanf("%d%c", &pontosturisticos);


}