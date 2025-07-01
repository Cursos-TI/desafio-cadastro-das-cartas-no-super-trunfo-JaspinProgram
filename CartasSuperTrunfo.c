#include <stdio.h>

int main()
{
    // Declarações - Carta 1:
    char estado1[3], codigo1[10], nome1[20];
    float populacao1, area1, pib1;
    int pontos1;
    float densidadepop1, pibpc1;

    // Declarações - Carta 2:
    char estado2[3], codigo2[10], nome2[20];
    float populacao2, area2, pib2;
    int pontos2;
    float densidadepop2, pibpc2;

    // Entrada - Carta 1:
    printf("\n ♣ Carta 1 ♣: \n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade (sem espaços): ");
    scanf(" %s", nome1);
    printf("População: ");
    scanf(" %f", &populacao1);
    printf("Área (km²): ");
    scanf(" %f", &area1);
    printf("PIB (reais): ");
    scanf(" %f", &pib1); // Já em reais.
    printf("Número de pontos turísticos: ");
    scanf("  %d", &pontos1);

    // Entrada - Carta 2:
    printf("\n ♣ Carta 2 ♣: \n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (reais): ");
    scanf("%f", &pib2); // Já em reais.
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo - Densidade e PIB per capita.
    densidadepop1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    densidadepop2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    // Saída - Carta 1:
    printf("\n ♣ Carta 1 ♣: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade: %.2f habitantes por km²\n", densidadepop1);
    printf("PIB per capita: %.2f de reais\n", pibpc1);

    // Saída - Carta 2:
    printf("\n ♣ Carta 2 ♣: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade: %.2f habitantes por km²\n", densidadepop2);
    printf("PIB per capita: %.2f de reais\n", pibpc2);

    return 0;
}
