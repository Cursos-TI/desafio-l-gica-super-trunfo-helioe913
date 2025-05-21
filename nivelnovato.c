#include <stdio.h>

int main(){

int populacao, ponto_turisticos;
float area, pib;
char estado[10];
char carta[10];
char nome_cidade[20];

int populacao2, ponto_turisticos2;
float area2, pib2;
char estado2[10];
char carta2[10];
char nome_cidade2[20];

    //Carta 01 - Entradas de Dados
    printf("Carta 1\n");
    printf("Digite o Sigla do Seu Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", &carta);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite sua População: \n");
    scanf("%d", &populacao);

    printf("Digite sua Área: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de Pontos turísticos:\n");
    scanf("%d", &ponto_turisticos);

    //Densidade Populacional - PIB Per capita - Carta 1

    float densidade_populacional = populacao / area;
    float pib_per_cap = pib / populacao;

    //Carta 02 - Entradas de dados
    printf("\n");
    printf("Carta 2\n");
    printf("Digite o Sila do Seu Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", &carta2);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Digite sua População: \n");
    scanf("%d", &populacao2);

    printf("Digite sua Área: \n");
    scanf("%f", &area2);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos turísticos:\n");
    scanf("%d", &ponto_turisticos2);

    //Densidade Populacional - PIB Per capita - Carta 2

    float densidade_populacional2 = populacao2 / area2;
    float pib_per_cap2 = pib2 / populacao2;

    
    //Apresentação das cartas ao Usuario - Carta 01
    printf("\n");
    printf("Carta 01\nEstado: %s\n", estado);
    printf("Codigo: %s\n", carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Pontos Turisticos: %d\n", ponto_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_cap);
    

    //Apresentação das cartas ao Usuario - Carta 02
    printf("\n");
    printf("Carta 02\nEstado: %s\n", &estado2);
    printf("Codigo: %s\n", &carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turisticos: %d\n", ponto_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_cap2);

//Comparação das Cartas
    printf("\n");
    printf("  Comparação de cartas - Atributo PIB\n");
    printf("\n");
    printf(" Carta 1 - %s (%s): %2.f\n", nome_cidade, estado, pib);
    printf(" Carta 2 - %s (%s): %2.f\n", nome_cidade2, estado2, pib2);
    printf("\n");

    if(pib > pib2){
        printf("Carta 1 (%s) Venceu!\n", nome_cidade);
    } else{
        printf("Carta 2 (%s) Venceu!\n", nome_cidade2);
    }

    return 0;
}