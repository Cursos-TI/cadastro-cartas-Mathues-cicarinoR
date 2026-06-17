#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado_1 = 0, Estado_2 = 0;
  char Codigo_1[4] = "a", Codigo_2[4] = "A";
  char Cidade_1[30] = "a", Cidade_2[30] = "A";
  int Populacao_1 = 0 , Populacao_2 = 0;
  float Area_1 = 0, Area_2 = 0;
  float Pib_1 = 0, Pib_2 = 0;
  int PontosTuristicos_1 = 0, PontosTuristicos_2 = 0;

  // Área para entrada de dados 
  printf("Carta-1\n");
  printf("Digite o Estado: \n");
  scanf("%c", &Estado_1);
  printf("Digite o Codigo da carta:\n");
  scanf("%s", Codigo_1);
  printf("Digite o nome da cidade:\n");
  scanf("%s", Cidade_1);
  printf("Digite a populacao:\n");
  scanf("%d", &Populacao_1);
  printf("Digite a area:\n");
  scanf("%f", &Area_1);
  printf("Digite o PIB:\n");   
  scanf("%f", &Pib_1);
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &PontosTuristicos_1);

  printf("Carta-2\n");
  printf("Digite o Estado: \n");
  scanf("%c", &Estado_2);
  printf("Digite o Codigo da carta:\n");
  scanf("%s", Codigo_2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", Cidade_2);
  printf("Digite a populacao:\n");
  scanf("%d", &Populacao_2);
  printf("Digite a area:\n");
  scanf("%f", &Area_2);
  printf("Digite o PIB:\n");   
  scanf("%f", &Pib_2);
  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &PontosTuristicos_2);

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c\n", Estado_1);
  printf("Codigo: %s\n", Codigo_1);
  printf("Nome da Cidade: %s\n", Cidade_1);
  printf("Populacao: %d\n", Populacao_1);
  printf("Area: %.2f km²\n", Area_1);
  printf("PIB: %.2f bilhões de reais\n", Pib_1);
  printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos_1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", Estado_2);
  printf("Codigo: %s\n", Codigo_2);
  printf("Nome da Cidade: %s\n", Cidade_2);
  printf("Populacao: %d\n", Populacao_2);
  printf("Area: %.2f km²\n", Area_2);
  printf("PIB: %.2f bilhões de reais\n", Pib_2);
  printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos_2);
  
  


return 0;
} 
