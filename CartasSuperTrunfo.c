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

  // Área para cálculos das propriedades das cidades
  float Densidade_1 = Populacao_1/Area_1, Densidade_2 = Populacao_2/Area_2;
  float RendaPerCapita_1 = Pib_1/Populacao_1, RendaPerCapita_2 = Pib_2/Populacao_2;

  // Área para cálculos de Super Poder

  float SuperPoder_1 = (Populacao_1 + Area_1 + Pib_1 + PontosTuristicos_1 + RendaPerCapita_1) + 1/Densidade_1 , SuperPoder_2 = (Populacao_2 + Area_2 + Pib_2 + PontosTuristicos_2 + RendaPerCapita_2) + 1/Densidade_2;
  
  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c\n", Estado_1);
  printf("Codigo: %s\n", Codigo_1);
  printf("Nome da Cidade: %s\n", Cidade_1);
  printf("Populacao: %d\n", Populacao_1);
  printf("Area: %.2f km²\n", Area_1);
  printf("PIB: %.2f bilhões de reais\n", Pib_1);
  printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos_1);
  printf("Densidade demografica da cidade 1: %.2f habitantes por km²\n", Densidade_1);
  printf("Renda per capita da cidade 1: %.2f reais\n", RendaPerCapita_1);
  printf("Super Poder da cidade 1: %.2f\n", SuperPoder_1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", Estado_2);
  printf("Codigo: %s\n", Codigo_2);
  printf("Nome da Cidade: %s\n", Cidade_2);
  printf("Populacao: %d\n", Populacao_2);
  printf("Area: %.2f km²\n", Area_2);
  printf("PIB: %.2f bilhões de reais\n", Pib_2);
  printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos_2);
  printf("Densidade demografica da cidade 2: %.2f habitantes por km²\n", Densidade_2);
  printf("Renda per capita da cidade 2: %.2f reais\n", RendaPerCapita_2);
  printf("Super Poder da cidade 2: %.2f\n", SuperPoder_2);

// Área para comparação das cidades

printf("comparando as cidades:\n");
printf("Populacao: Carta 1 venceu? %u\n", Populacao_1 > Populacao_2);
printf("Area: Carta 1 venceu? %u\n", Area_1 > Area_2);
printf("PIB: Carta 1 venceu? %u\n", Pib_1 > Pib_2);
printf("Pontos Turisticos: Carta 1 venceu? %u\n", PontosTuristicos_1 > PontosTuristicos_2);
printf("Densidade demografica: Carta 2 venceu? %u\n", Densidade_1 < Densidade_2);
printf("Renda per capita: Carta 1 venceu? %u\n", RendaPerCapita_1 > RendaPerCapita_2);
printf("Super Poder: Carta 1 venceu? %u\n", SuperPoder_1 > SuperPoder_2);



  



return 0;
} 
