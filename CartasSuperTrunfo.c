#include <stdio.h>


int main() {
  // Declaraçao das variáveis da primeira carta.
  char estado1[50];
  char codigo_carta1[10];
  char cidade1[50];
  int populacao1;
  float areaKm1;
  float pib1;
  int pontos_turisticos1;

  // Declaraçao das variáveis da segunda carta.
  char estado2[50];
  char codigo_carta2[10];
  char cidade2[50];
  int populacao2;
  float areaKm2;
  float pib2;
  int pontos_turisticos2;
  
  // Entrada de dados da primeira carta.
  printf("Cadastro da carta 1\n");
  printf("===================\n");

  printf("Digite o Estado: ");
  scanf(" %[^\n]", estado1);

  printf("Digite o Código da Carta 1: ");
  scanf("%s", codigo_carta1);

  printf("Digite a Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Área em km²: ");
  scanf("%f", &areaKm1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  
  printf("Digite o Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  printf("\n");
  
   // Entrada de dados da segunda carta.
  printf("Cadastro da carta 2\n");
  printf("===================\n");

  printf("Digite o Estado: ");
  scanf(" %[^\n]", estado2);

  printf("Digite o Código da Carta 2: ");
  scanf("%s", codigo_carta2);

  printf("Digite a Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Área em km²: ");
  scanf("%f", &areaKm2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  
  printf("Digite o Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Exibição das cartas cadastradas
  printf("\n\n ===== Cartas Cadastradas ===== \n\n");

  // Exibição da primeira carta
  printf("Carta 1 \n");
  printf("-------- \n\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", codigo_carta1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área em km²: %.2f km²\n", areaKm1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);
  
  printf("\n");

   // Exibição da segunda carta
  printf("Carta 2 \n");
  printf("-------- \n\n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", codigo_carta2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área em km²: %.2f km²\n", areaKm2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);
  
  


return 0;
} 
