#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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
  printf("Cadastro da carta 1/n");
  printf("===================/n');

  printf("Digite o Estado: ");
  scanf(" %[^\n]", estado1);

  printf("Digite o Código da Carta 1: ");
  scanf("%s", codigo_carta1);

  printf("Digite a Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Digite a População: ");
  scanf("%d", &popuplacao1);

  printf("Digite a Área em Km: ");
  scanf("%f", &areaKm1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  
  printf("Digite o Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);
  
   // Entrada de dados da segunda carta.
  printf("Cadastro da carta 2/n");
  printf("===================/n');

  printf("Digite o Estado: ");
  scanf(" %[^\n]", estado2);

  printf("Digite o Código da Carta 2: ");
  scanf("%s", codigo_carta2);

  printf("Digite a Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a População: ");
  scanf("%d", &popuplacao2);

  printf("Digite a Área em Km: ");
  scanf("%f", &areaKm2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  
  printf("Digite o Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Exibição das cartas cadastradas
  printf("\n\n ==== Cartas Cadastradas ==== \n\n");

  // Exibição da primeira carta
  printf("Carta 1: \n");
  printf("-------- \n");
  printf("Estado: %s", estado1);
  

return 0;
} 
