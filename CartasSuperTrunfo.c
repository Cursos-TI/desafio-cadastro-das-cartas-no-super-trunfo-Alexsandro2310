#include <stdio.h>


int main() {
        //VARIAVES DA PRIMEIRA CARTA DO JOGO
    char estado1;
    int codigo1;
    char cidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float areakm1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1; // Nova variável para o Super Poder


    //VARIAVEIS DA SEGUNDA CARTA DO JOGO

    char estado2;
    int codigo2;
    char cidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float areakm2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibPercapita2;
    float superPoder2; // Nova variável para o Super Poder



    //ENTRADA DE DADOS DA PRIMEIRA CARTA

    printf("Digite a letra do estado da primeira carta (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da primeira carta (01-04): \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade:\n"); //TIREI O & ANTES DO NOME CIDADE POIS ARRAYS JÁ SAO CONVERTIDOS PARA PONTEIROS
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

    //ADICIONANDO O CALCULO DE DENSIDADE POPULACIONAL E PIB PER CAPITA DO NIVEL AVENTUREIRO

    densidade1 = populacao1 / areakm1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / areakm2;
    pibPercapita2 = pib2 / populacao2;

   

    //EXIBIÇÃO DAS CARTAS

    // Exibição da primeira carta //adicionado novos calculos

    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);




    //EXIBIÇÃO DA SEGUNDA CARTA
    ////ESSE PRINTF ABAIXO COLOQUEI PARA SEPARAR UMA CARTA DA OUTRA NO TERMINAL.
    // ADICIONADO NOVOS CALCULOS DO NIVEL AVENTUREIRO.

     printf("\n----------------------------------------\n\n");

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPercapita2);


    return 0;
}
