#include <stdio.h>

//Projeto finalizado

int main() {

    ///// Variáveis

    int populacao, PontoTuris;
    float area, PIB;
    char estado[2], cidade[50], codigo[5];

    //////////////////////////////// - DIVISÃO - /////////////////////////////////////////////
    
    int populacao2, PontoTuris2;
    float area2, PIB2;
    char estado2[2], cidade2[50], codigo2[5];


    ///// Códigos:


    printf("Digite o seu estado: \n");
    scanf("%s", &estado);

    printf("Digite o seu código: \n");
    scanf("%s", &codigo);

    printf("Digite a sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &PontoTuris);

    //////////////////////////////// - DIVISÃO - /////////////////////////////////////////////
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("\n");
    //////////////////////////////// - DIVISÃO - /////////////////////////////////////////////

    printf("Digite o seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite o seu código: \n");
    scanf("%s", &codigo2);

    printf("Digite a sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &PontoTuris2);

    //////////////////////////////// - DIVISÃO - /////////////////////////////////////////////
    printf("\n");
    printf("************************************** - Cartas - ************************************** \n");
    printf("\n");
    //////////////////////////////// - DIVISÃO - /////////////////////////////////////////////

    ///// EXIBIÇÃO

    printf("Carta 1: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f km² \n PIB: %f milhões de reais \n Número de pontos Turísticos: %d \n \n \n", estado, codigo, cidade, populacao, area, PIB, PontoTuris);

    printf("Carta 2: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f km² \n PIB: %f milhões de reais \n Número de pontos Turísticos: %d \n \n", estado2, codigo2, cidade2, populacao2, area2, PIB2, PontoTuris2);

    return 0;
}
