#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 
int main() {

  char Codigo[4];  
  char Estado;
  char NomeCidade[64];
  int PontosTuristicos; 
  double AreaKM, PIB, Populacao;
  
  printf("\nEstado: (A a H) : "); // imprime a letra estado A a H 
  scanf("%c", &Estado); // Lê a letra do estado A a H
  
  printf("\nCodigo: (Ex: A01): "); // imprime o formato do código da carta
  scanf("%3s", Codigo);  // Lê o código da carta, limitando a 3 caracteres

  printf("\nNome da Cidade: "); // imprime a mensagem para o nome da cidade
  scanf(" %[^\n]", NomeCidade); // Lê o nome da cidade, permitindo espaços e limitando a 63 caracteres

  printf("\nPopulação: "); // imprime a mensagem para a população
  scanf("%lF", &Populacao); // Lê a população da cidade, permitindo números decimais

  printf("\nArea: "); // imprime a mensagem para a área 
  scanf("%lf", &AreaKM); // Lê a área da cidade em km², permitindo números decimais
  
  printf("\nPIB: "); // imprime a mensagem para o PIB
  scanf("%lf", &PIB); // Lê o PIB da cidade em bilhões de reais, permitindo números decimais

  printf("\nNumero de pontos turisticos: ");
  scanf("%d", &PontosTuristicos);

    //impressao dos dados cadastrados
    printf("\n\nCarta cadastrada com sucesso!\n"); 
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %.2lf\n", Populacao); //Imprime a população com 2 casas decimais
    printf("Area: %.2lf km²\n", AreaKM); //Imprime a área com 2 casas decimais e a unidade km²
    printf("PIB: %.2lf bilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %d\n\n", PontosTuristicos); // Imprime o número de pontos turísticos como um inteiro

return 0;
} 
;