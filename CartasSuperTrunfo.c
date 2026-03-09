#include <stdio.h>

// Desafio Super Trunfo - Países
 
int main() {

  // varaveis Carta 1
  char Codigo[4];  
  char Estado;
  char NomeCidade[64];
  int PontosTuristicos; 
  double DensidadePopulacional, PIBPercapita, AreaKM, PIB;
  unsigned long int Populacao; 
  float SuperPoder;
  double inversoDensidade;
  int resultado;

  // variaveis Carta 2
  char Codigo2[4];  
  char Estado02;
  char NomeCidade2[64];
  int PontosTuristicos2; 
  double DensidadePopulacional2, PIBPercapita2, AreaKM2, PIB2;
  unsigned long int Populacao2;
  float SuperPoder2;
  double inversoDensidade2;

  // Entrada de dados Carta 1
  printf("*****insira os dados da primeira carta!*****\n");
  printf("Estado A à H: ");
  scanf("%c", &Estado); 
  
  printf("Codigo: (Ex: A01): "); 
  scanf("%3s", Codigo);  

  printf("Nome da Cidade: "); 
  scanf(" %[^\n]", NomeCidade); 

  printf("População: "); 
  scanf("%ld", &Populacao); 

  printf("Área: "); 
  scanf("%lf", &AreaKM);

  printf("PIB: "); 
  scanf("%lf", &PIB); 

  printf("Número de pontos turisticos: ");
  scanf("%d", &PontosTuristicos);

  // Calculos para Carta 1
  DensidadePopulacional = Populacao / AreaKM;
  PIBPercapita = PIB / Populacao;

  inversoDensidade = 1 / DensidadePopulacional;
  SuperPoder = (float)Populacao + AreaKM + PIB + (float)PontosTuristicos + PIBPercapita + inversoDensidade ;
   

  //Entrada de dados da segunda carta -----------------------------------------------------------------------------------------------------------------
  printf("\n*****insira os dados da segunda carta!*****\n");
  printf("Estado A à H: ");
  scanf(" %c", &Estado02); 
    
  printf("Codigo: (Ex: A01): "); 
  scanf("%3s", Codigo2);  

  printf("Nome da Cidade: "); 
  scanf(" %[^\n]", NomeCidade2); 

  printf("População: "); 
  scanf("%ld", &Populacao2); 

  printf("Área: "); 
  scanf("%lf", &AreaKM2); 
  
  printf("PIB: "); 
  scanf("%lf", &PIB2); 

  printf("Número de pontos turisticos: ");
  scanf("%d", &PontosTuristicos2);
  
  // Calculos para Carta 2
  DensidadePopulacional2 = Populacao2 / AreaKM2;
  PIBPercapita2 = PIB2 / Populacao2;

  inversoDensidade2 = 1 / DensidadePopulacional2;
  SuperPoder2 = (float)Populacao2 + AreaKM2 + PIB2 + (float)PontosTuristicos2 + PIBPercapita2 + inversoDensidade2; 
 

      //impressao dos dados cadastrados Carta 1
    printf("\n***** Carta 1 *****\n"); 
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %ld \n", Populacao); 
    printf("Area: %.2lf km²\n", AreaKM); 
    printf("PIB: %.2lf bilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %d\n", PontosTuristicos); 
    printf("Densidade Populacional %.2lf hab/km² \n", DensidadePopulacional);
    printf("PIB per Capita %.2lf Reais\n", PIBPercapita);
    printf("Super Poder carta 1: %.2f\n", SuperPoder);

     
    //impressao dos dados cadastrados carta 2
    printf("\n***** Carta 2 *****\n"); 
    printf("Estado: %c\n", Estado02);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %ld \n", Populacao2); 
    printf("Area: %.2lf km²\n", AreaKM2); 
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %d\n", PontosTuristicos2); 
    printf("Densidade Populacional %.2lf hab/km² \n", DensidadePopulacional2);
    printf("PIB per Capita %.2lf Reais \n", PIBPercapita2);
    printf("Super Poder carta 2: %.2f\n\n", SuperPoder2);
 
    // comparando as cartas
    printf("Comparação entre as cartas:\n");
    printf("População: Carta 1 %d\n", resultado = Populacao > Populacao2);
    
} 