#include <stdio.h>


int main() {
        //VARIAVES DA PRIMEIRA CARTA DO JOGO
    char estado1;
    int codigo1;
    char cidade1[50];
    int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;

    //VARIAVEIS DA SEGUNDA CARTA DO JOGO

    char estado2;
    int codigo2;
    char cidade2[50];
    int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;


    //ENTRADA DE DADOS DA PRIMEIRA CARTA

    printf("Digite a letra do estado da primeira carta (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da primeira carta (01-04): \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade: \n"); //TIREI O & ANTES DO NOME CIDADE POIS ARRAYS JÁ SAO CONVERTIDOS PARA PONTEIROS
    scanf("%s", cidade1);

    printf("Informe a população da cidade; \n");
    scanf("%d", &populacao1);

    printf("Informe a area da cidade (km²): \n");
    scanf("%f", &areakm1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Informe quantos pontos turisticos tem na cidade: \n");
    scanf("%d", &pontosturisticos1);

     getchar(); /*UTILIZEI O GETCHAR PARA LIMPAR O BUFFER, ESTAVA DANDO ERRO AO PULAR LINHAS, 
    ALGO DEIXANDO PELO SCANF ANTERIOR*/


    //ENTRADA DE DADOS DA SEGUNDA CARTA

    //ESSE PRINTF ABAIXO COLOQUEI PARA SEPARAR UMA CARTA DA OUTRA NO TERMINAL.

    printf("---------------------------------------------\n\n");


       printf("Digite a letra do estado da segunda carta (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda carta (01-04): \n");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade: \n"); //TIREI O & ANTES DO NOME CIDADE POIS ARRAYS JÁ SAO CONVERTIDOS PARA PONTEIROS
    scanf("%s", cidade2);

    printf("Informe a população da cidade; \n");
    scanf("%d", &populacao2);

    printf("Informe a area da cidade (km²): \n");
    scanf("%f", &areakm2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turisticos tem na cidade: \n");
    scanf("%d", &pontosturisticos2);    

   

    //EXIBIÇÃO DAS CARTAS

    // Exibição da primeira carta

    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);


    //EXIBIÇÃO DA SEGUNDA CARTA
    ////ESSE PRINTF ABAIXO COLOQUEI PARA SEPARAR UMA CARTA DA OUTRA NO TERMINAL.

     printf("\n----------------------------------------\n\n");

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
