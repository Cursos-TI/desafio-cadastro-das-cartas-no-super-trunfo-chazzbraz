#include <stdio.h>

int main(){
   
   //Declarando as variáveis carta 1
   char estado1;
   char codigo1[10];
   char nome1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontos1;
   
   //Declarando as variáveis carta 2
   char estado2;
   char codigo2[10];
   char nome2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontos2;

   //Imprimindo as variáveis cadastro carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);  
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome: ");
    scanf(" %[^\n]", nome1);  
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);  
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome: ");
    scanf(" %[^\n]", nome2);  
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibindo os dados cadastrados
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);


   return 0;
}
