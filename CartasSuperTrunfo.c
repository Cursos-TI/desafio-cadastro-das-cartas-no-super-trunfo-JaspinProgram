#include <stdio.h>

int main()
{

    char Estado;
    char Codigo[20];
    char Cidade[20];
    int Populacao;
    float Area;
    double PIB;
    int Turismo;

    printf("Estado: digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &Estado);

    printf("Código: a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &Area);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf(" %lf", &PIB);

    printf("Número de pontos turísticos: digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &Turismo);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Turismo);

    return 0;
}