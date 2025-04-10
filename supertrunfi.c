#include <stdio.h>

int main() {

    // Carta 1

    char Estado1;
    char codiogoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char Estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada da Carta 1

    printf("Dados da Carta 1: \n ");
    printf("Estado (A-H): ");
    scanf("%c", &Estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codiogoCarta1);
    printf("Nome da Cidade: ");
    scanf("%[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
     
    // Entrada da Carta 2

    printf("Dados da Carta 2: \n ");
    printf("Estado (A-H): ");
    scanf("%c", &Estado2);
    printf("Código da carta (ex: B01): ");
    scanf("%s", codigoCarta2);
    printf("Nome da Cidade: ");
    scanf("%[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", codiogoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Trurísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}




