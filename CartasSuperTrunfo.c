#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 
int main() {

  char Codigo[4];  
  char Estado;
  char NomeCidade[64];
  int PontosTuristicos; 
  double AreaKM, PIB, Populcao;
  
  printf("\nEstado: %c", Estado); // imprime a letra estado A a H 
  scanf("%c", &Estado); // Lê a letra do estado A a H
  
  printf("\nCodigo: %s", Codigo); // Imprime o codigo A a h + 01, 02, 03 ou 04.
  scanf("%s", &Codigo); // Lê o código A a h + 01, 02, 03 ou 04.
  
  printf("\nNome da Cidade: %s", NomeCidade);
  scanf("%s", &NomeCidade);

  printf("\nPopulação: %f", Populcao);
  scanf("%lf", &Populcao);

  printf("\nArea: %f", AreaKM);
  scanf("%lf", &AreaKM);
  
  printf("\nPIB: %f", PIB);
  scanf("%lf", &PIB);

  printf("\nPontos Turisticos: %d", PontosTuristicos);
  scanf("%d", &PontosTuristicos);

return 0;
} 
;