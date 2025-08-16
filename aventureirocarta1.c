#include <stdio.h>

int main() {

char estado[50] = "Serjipe";
char codigo_carta[50] = "A01";
char nome_cidade[50] = "Aracaju";
int populacao = 602;
int pontos_turisticos = 5;
float area = 181;
float PIB = 18;
float Densidade_populacional = area + populacao / 2;
float pib_per_capta = PIB + populacao / 2;

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


printf("Dados da carta 1:\n");
printf("Estado: %s.\n", estado);
printf("Codigo: %s.\n", codigo_carta);
printf("Nome da cidade: %s.\n", nome_cidade);
printf("Populacao: %d.mil habitantes\n", populacao);
printf("Area: %.2f.km\n", area);
printf("PIB: %.2f.milhoes de reais\n", PIB);
printf("Pontos turisticos: %d.\n", pontos_turisticos);
printf("Densidade populacional: %.2f.\n", Densidade_populacional);
printf("PIB per capta: %.2f.\n", pib_per_capta);

 }
