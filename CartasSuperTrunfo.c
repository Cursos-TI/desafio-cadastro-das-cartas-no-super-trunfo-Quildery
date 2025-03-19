#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da Carta1
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
     
    printf("Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código (ex: A01): ");
    scanf(" %s", codigo1);

    printf("DIgite o nome da cidade: ");
    scanf(" %s", nome1);

    printf("Digite a população: ");
    scanf(" %d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf(" %f", &area1);

    printf("DIgite o PIB (Bilhões): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos1);
     
    // Dados da Carta2
    printf("\n Carta 2 \n ");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("DIgite o código (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf(" %f", &area2);

    printf("DIgite o PIB (Bilhões): ");
    scanf(" %f", &pib2);

    printf("DIgite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Dados das duas Cartas
    printf("\nCarta 1: \n ");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("\nCarta 2: \n ");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    // Os nomes das cidades tem que ser digitados juntos EX: SaoPaulo, RioJaneiro...

    return 0;
}