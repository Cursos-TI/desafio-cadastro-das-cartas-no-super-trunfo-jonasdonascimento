#include <stdio.h>
#include <stdlib.h>

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

     //Menu do jogo
  int carta1, carta2;
  float dados1A, dados2A, dados1B, dados2B, soma1, soma2;
  
  printf("*** Escolha uma opcao da carta 1 ***\n");
  printf("1-Populacao\n 2-Area\n 3-PIB\n 4-Pontos turisticos\n 5-Densidade populacional(menor valor ganha)\n 6-Pib per capta\n 7-Super poder\n");
  scanf("%d", &carta1);

  switch (carta1){

  case 1:
    printf("Populacao:\n");
    dados1A = populacao1, dados2A = populacao2;
    break;
  case 2:
    printf("Area:\n");
    dados1A = area1, dados2A = area2;
    break;
  case 3:
    printf("PIB:\n");
    dados1A = PIB1, dados2A = PIB2;
    break;
  case 4:
    printf("Pontos turisticos:\n");
    dados1A = pontos_turisticos1, dados2A = pontos_turisticos2;
    break;
  case 5:
    printf("Densidade populacional:\n");
    dados1A = densidade_populacional1, dados2A = densidade_populacional2;
    break;
  case 6:
    printf("Pib per capta:\n");
    dados1A = pib_per_capta1, dados2A = pib_per_capta2;
    break;
  case 7:
    printf("Super poder:\n");
    dados1A = super_poder1, dados2A = super_poder2;
    break;
  
  default:
   printf("Numero invalido. Selecione um numero entre 1-7\n");
    break;
  }

  printf("*** Escolha uma opcao da carta 2 ***\n");
  printf("1-Populacao\n 2-Area\n 3-PIB\n 4-Pontos turisticos\n 5-Densidade populacional(menor valor ganha)\n 6-Pib per capta\n 7-Super poder\n");
  scanf("%d", &carta2);

  switch (carta2){

  case 1:
    printf("Populacao:\n");
    dados1B = populacao1, dados2B = populacao2;
    break;
  case 2:
    printf("Area:\n");
    dados1B = area1, dados2B = area2;
    break;
  case 3:
    printf("PIB:\n");
    dados1B = PIB1, dados2B = PIB2;
    break;
  case 4:
    printf("Pontos turisticos:\n");
    dados1B = pontos_turisticos1, dados2B = pontos_turisticos2;
    break;
  case 5:
    printf("Densidade populacional:\n");
    dados1B = densidade_populacional1, dados2B = densidade_populacional2;
    break;
  case 6:
    printf("Pib per capta:\n");
    dados1B = pib_per_capta1, dados2B = pib_per_capta2;
    break;
  case 7:
    printf("Super poder:\n");
    dados1B = super_poder1, dados2B = super_poder2;
    break;
  
  default:
   printf("Numero invalido. Selecione um numero entre 1-7\n");
    break;
  }
   
  soma1 = (dados1A, dados1A) + (dados1B, dados1B);
  soma2 = (dados2A, dados2A) + (dados1B, dados2B);

  printf("%s: %.2f + %.2f = %2.f\n", estado1, dados1A, dados1B, soma1);
  printf("%s: %.2f + %.2f = %2.f\n", estado2, dados2A, dados2B, soma2);
  
   //Comparação de valores 

   if (soma1 > soma2)
   {
    printf("Vencedor: %s\n", estado1);
   }else if (soma2 > soma1)
   {
    printf("Vencedor: %s\n", estado2);
   }else{
    printf("Empate!\n");
   }
   
   
  
   
   
}