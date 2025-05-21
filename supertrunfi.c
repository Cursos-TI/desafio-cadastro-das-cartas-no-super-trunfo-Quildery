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
    float densidade1;
    float pib_per_capital1;
    float superPoder1;

    // Carta 2
    
    char Estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pib_per_capital2;
    float superPoder2;

    // Entrada da Carta 1

    printf("Dados da Carta 1: \n ");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado1);
    getchar();
    
    printf("Código da carta (ex: A01): ");
    scanf(" %s", codiogoCarta1);
    getchar();
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    getchar();
    
    printf("População: ");
    scanf( "%d", &populacao1);
    getchar();
    
    printf("Área (km²): ");
    scanf( "%f", &area1);
    getchar();
    
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    getchar();
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    getchar();
     
    // Entrada da Carta 2

    printf("Dados da Carta 2: \n ");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);
    getchar();
    
    printf("Código da carta (ex: B01): ");
    scanf(" %s", codigoCarta2);
    getchar();
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    getchar();
    
    printf("População: ");
    scanf(" %d", populacao2);
    getchar();
    
    printf("Área (km²): ");
    scanf(" %f", &area2);
    getchar();
    
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    getchar();
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    getchar();

    // Cálculo de densidade populaciona e PIB per Capital

    densidade1 = populacao1 / area1;
    pib_per_capital1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capital2 = (pib2 * 1000000000) / populacao2;

    // Cálculo de Super poder

    superpoder1 = (float) populacao1 + area1 + pontosTuristicos1 + densidade1 + pib_per_capital1;
    if (densidade1 > 0) superPoder1 += (1.0 / densidade1);
    superPoder2 = (float) populacao2 + area2 + pontosTuristicos2 + densidade2 + pib_per_capital2;
    if (densidade2 > 0) superPoder2 += (1.0 / densidade2);

    // Saída de dados da Carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", codiogoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Trurísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capital: %.2f reais\n", pib_per_capital1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Saída de dados da Carta 2

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capital: %.2f reais\n", pib_per_capital2);
    printf("Super Poder: %.2f\n", superPoder2");

    // Comparação de Super Poderes

    printf("\nComparação de Cartas: \n");
    printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2", populacao1 > populacao2);
    printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2", populacao1 > populacao2);
    printf("Área: %s venceu (%d)\n", (area1 > area2) ? "Carta 1": "Carta 2", area1 < area2);
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2", pib1 > pib2);
    printf("Número de Pontos Turísticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 > densidade2) ? "carta1": "carta2", densidade1 > densidade2);
    printf("PIB per Capital: %s venceu (%d)\n", (pib_per_capital1 > pib_per_capital2) ? "carta1": "carta2", pib_per_capital1 > pib_per_capital2);
    printf("Super Poder: %s venceu (%d)\n",(superPoder1 > superPoder2)? "Carta 1": " Carata 2", superPoder1 > superPoder2);

    return 0;
}




