#include <stdio.h>

int main() {

char estado[50] = "Bahia";
char codigo_carta[50] = "B02";
char nome_cidade[50] = "Salvador";
int populacao = 241;
int pontos_turisticos = 10;
float area = 693;
float PIB = 62;


    printf("Digite o estado:\n");
    scanf("%s", estado);

    printf("digite o codigo da carta:\n");
    scanf("%s", codigo_carta);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nome_cidade);

    printf("Informe a população:\n");
    scanf("%d", &populacao);

    printf("Informe a area:\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos?:\n");
    scanf("%d", &pontos_turisticos);

    printf("Dados da carta 2:\n");
    printf("Estado: %s.\n", estado);
    printf("Codigo: %s.\n", codigo_carta);
    printf("Nome da cidade: %s.\n", nome_cidade);
    printf("Populacao: %d.mil habitantes\n", populacao);
    printf("Area: %.2f.km\n", area);
    printf("PIB: %.2f.milhoes de reais\n", PIB);
    printf("Pontos turisticos: %d.\n", pontos_turisticos);

 }