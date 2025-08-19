#include <stdio.h>

int main(){

   char estado1[20], estado2[20];
   char codigo_carta1[10], codigo_carta2[10];
   char cidade1[15], cidade2[15];
   int populacao1 = 602, populacao2 = 241;
   int pontos_turisticos1 = 5, pontos_turisticos2 = 10;
   float area1 = 181, area2 = 693;
   float PIB1 = 18, PIB2 = 62;
   float densidade_populacional1 = area1 + populacao1 / 2;
   float densidade_populacional2 = area2 + populacao2 / 2;
   float pib_per_capta1 = PIB1 + populacao1 / 2;
   float pib_per_capta2 = PIB2 + populacao2 / 2;
   float poder1 = 1/ densidade_populacional1;
   float poder2 = 1/ densidade_populacional2;
   float super_poder1 = populacao1 + pontos_turisticos1 + area1 + PIB1 + pib_per_capta1 + poder1;
   float super_poder2 = populacao2 + pontos_turisticos2 + area2 + PIB2 + pib_per_capta2 + poder2;

   /*Inserindo dados da cidade1*/

   printf("Digite o estado1\n");
   scanf("%s", estado1);

   printf("Digite o codigo da carta1:\n");
   scanf("%s", codigo_carta1);

   printf("Informe o nome da cidade1\n");
   scanf("%s", cidade1);

   printf("Informe a população1:\n");
   scanf("%d", &populacao1);

   printf("Informe a area1:\n");
   scanf("%f", &area1);

   printf("Informe o PIB1:\n");
   scanf("%f", &PIB1);

   printf("Quantos pontos turisticos1?:\n");
   scanf("%d", &pontos_turisticos1);

   /*Inserindo dados da cidade2*/
   
    printf("Digite o estado2\n");
   scanf("%s", estado2);

   printf("Digite o codigo da carta2:\n");
   scanf("%s", codigo_carta2);

   printf("Informe o nome da cidade2\n");
   scanf("%s", cidade2);

   printf("Informe a população2:\n");
   scanf("%d", &populacao2);

   printf("Informe a area2:\n");
   scanf("%f", &area2);

   printf("Informe o PIB2:\n");
   scanf("%f", &PIB2);

   printf("Quantos pontos turisticos2?:\n");
   scanf("%d", &pontos_turisticos2);

   /*Resultado dos dados inseridos da cidade 1 e 2*/
    printf("Dados da carta 1:\n");
    printf("Estado: %s.\n", estado1);
    printf("Codigo: %s.\n", codigo_carta1);
    printf("Nome da cidade: %s.\n", cidade1);
    printf("Populacao: %d.mil habitantes\n", populacao1);
    printf("Area: %.2f.km\n", area1);
    printf("PIB: %.2f.milhoes de reais\n", PIB1);
    printf("Pontos turisticos: %d.\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f.\n", densidade_populacional1);
    printf("PIB per capta: %.2f.\n", pib_per_capta1);
    printf("super poder: %.3f\n", super_poder1);

    printf(":\n");

    printf("Dados da carta 2:\n");
    printf("Estado: %s.\n", estado2);
    printf("Codigo: %s.\n", codigo_carta2);
    printf("Nome da cidade: %s.\n", cidade2);
    printf("Populacao: %d.mil habitantes\n", populacao2);
    printf("Area: %.2f.km\n", area2);
    printf("PIB: %.2f.milhoes de reais\n", PIB2);
    printf("Pontos turisticos: %d.\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f.\n", densidade_populacional2);
    printf("PIB per capta: %.2f.\n", pib_per_capta2);
    printf("super poder: %.3f\n", super_poder2);

    printf(":\n");
    /*Comparação das cartas*/
    printf("Comparativo das cartas:\n");

    printf("População1 > população2: %d\n", populacao1 > populacao2);
    printf("Area1 > Area2: %d\n", area1 > area2);
    printf("PIB1 > PIB2: %d\n", PIB1 > PIB2);
    printf("Pontos turisticos1 < pontos turisticos2: %d\n", pontos_turisticos1 < pontos_turisticos2);
    printf("Densidade populacional1 > Densidade populacional2: %d\n", densidade_populacional1 > densidade_populacional2);
    printf("PIB per capta1 > PIB per capta2: %d\n", pib_per_capta1 > pib_per_capta2);
    printf("Super poder1 > Super poder2: %d\n", super_poder1 > super_poder2);


   
}
