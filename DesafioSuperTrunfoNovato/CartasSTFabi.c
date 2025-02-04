#include <stdio.h>
// Desafio Super Trunfo - Países (Nível Novato)

typedef struct {
    int populacao;
    float area; // em km²
    float pib;  // em bilhões
    int pontosTuristicos;
} Cidade;

int main() {
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    Cidade cidades[8][4]; // 8 estados, 4 cidades por estado
    
    // Valores Fictícios
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 4; j++) {
            // Atribuindo valores fictícios
            cidades[i][j].populacao = 100000 + (i + j) * 5000;  // População fictícia
            cidades[i][j].area = 100.0 + (i + j) * 10.0;         // Área fictícia em km²
            cidades[i][j].pib = 50.0 + (i + j) * 5.0;            // PIB fictício em bilhões
            cidades[i][j].pontosTuristicos = 10 + (i + j) * 2;   // Pontos turísticos fictícios
        }
    }
    
    // Loop para percorrer os estados e suas cidades
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 4; j++) {
            // Código da carta
            printf("Código: %c%02d\n", estados[i], j + 1);
            
            // Imprimindo as informações da cidade
            printf("População: %d\n", cidades[i][j].populacao);
            printf("Área: %.2f km²\n", cidades[i][j].area);
            printf("PIB: %.2f bilhões\n", cidades[i][j].pib);
            printf("Pontos Turísticos: %d\n\n", cidades[i][j].pontosTuristicos);
        }
    }

    return 0;
}