#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 
int main() {

  char Codigo[4];  
  char Estado;
  char NomeCidade[64];
  int PontosTuristicos; 
  double DensidadePopulacional, PIBPercapita, AreaKM, PIB, Populacao;
  
// variaveis Carta 2
1
  char Codigo2[4];  
  char Estado2;
  char NomeCidade2[64];
  int PontosTuristicos2; 
  double DensidadePopulacional2, PIBPercapita2, AreaKM2, PIB2, Populacao2;

  // Entrada de dados Carta 1

  scanf("%c", &Estado); // Lê a letra do estado A a H
  
  printf("\nCodigo: (Ex: A01): "); // imprime o formato do código da carta
  scanf("%3s", Codigo);  // Lê o código da carta, limitando a 3 caracteres

  printf("\nNome da Cidade: "); // imprime a mensagem para o nome da cidade
  scanf(" %[^\n]", NomeCidade); // Lê o nome da cidade, permitindo espaços e limitando a 63 caracteres

  printf("\nPopulação: "); // imprime a mensagem para a população
  scanf("%lf", &Populacao); // Lê a população da cidade, permitindo números decimais

  printf("\nArea: "); // imprime a mensagem para a área 
  scanf("%lf", &AreaKM); // Lê a área da cidade em km², permitindo números decimais
  
  printf("\nPIB: "); // imprime a mensagem para o PIB
  scanf("%lf", &PIB); // Lê o PIB da cidade em bilhões de reais, permitindo números decimais

  printf("\nNúmero de pontos turisticos: ");
  scanf("%d", &PontosTuristicos);
  
  DensidadePopulacional = Populacao / AreaKM;
  PIBPercapita = PIB / Populacao;

    //impressao dos dados cadastrados Carta 1 
    printf("\n\n***** Carta 1 *****\n\n"); 
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %.2lf\n", Populacao); //Imprime a população com 2 casas decimais
    printf("Area: %.2lf km²\n", AreaKM); //Imprime a área com 2 casas decimais e a unidade km²
    printf("PIB: %.2lf bilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %d\n", PontosTuristicos); // Imprime o número de pontos turísticos como um inteiro
    printf("Densidade Populacional %.2lf hab/km² \n", DensidadePopulacional);
    printf("PIB per Capita %.2lf Reais \n\n\n", PIBPercapita);

scanf("%c", &Estado2); // Lê a letra do estado A a H
  
  printf("\nCodigo: (Ex: A01): "); 
  scanf("%3s", Codigo2);  // Lê o código da carta, limitando a 3 caracteres

  printf("\nNome da Cidade: "); 
  scanf(" %[^\n]", NomeCidade2);

  printf("\nPopulação: "); 
  scanf("%lf", &Populacao2); 

  printf("\nArea: ");  
  scanf("%lf", &AreaKM2); 
  
  printf("\nPIB: "); 
  scanf("%lf", &PIB2); 

  printf("\nNúmero de pontos turisticos: ");
  scanf("%d", &PontosTuristicos2);
  
  DensidadePopulacional2 = Populacao2 / AreaKM2;
  PIBPercapita2 = PIB2 / Populacao2;

    //impressao dos dados cadastrados carta 2
    printf("\n\n***** Carta 1 *****\n\n"); 
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %.2lf\n", Populacao2); 
    printf("Area: %.2lf km²\n", AreaKM2); 
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %d\n", PontosTuristicos2); // Imprime o número de pontos turísticos como um inteiro
    printf("Densidade Populacional %.2lf hab/km² \n", DensidadePopulacional2);
    printf("PIB per Capita %.2lf Reais \n\n\n", PIBPercapita2);


return 0;
} 
