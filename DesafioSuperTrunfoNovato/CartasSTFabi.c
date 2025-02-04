#include <stdio.h>
// Desafio Super Trunfo - Países (Nível Novato)

int main(){
    char país[100]; 
    char estados;
    int cidade;
    double população, área, pib, pontosturísticos;

    printf("Nome do País: \n");
    scanf("%s", &país);

    printf("Nome do Estado (Escolha uma letra de A até H): \n");
    getchar();
    scanf("%c", &estados);

    printf("Nome da Cidade (Para cada cidade, escolha um número de 01 até 04): \n");
    getchar();
    scanf("%d", &cidade);

    printf("População: \n");
    scanf("%e", &população);

    printf("Área em KM2: \n");
    scanf("%e", &área);

    printf("PIB: \n");
    scanf("%e", &pib);

    printf("Pontos Turísticos: \n");
    scanf("%e", &pontosturísticos);

    return 0;


}