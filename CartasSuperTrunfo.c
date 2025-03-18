#include <stdio.h>

int main(){
    char estadoA, estadoB;
    char codigo_cartaA[5], codigo_cartaB[5];
    char cidadeA[20], cidadeB[20];
    float populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;


    //PREENCHIMENTO DE CADASTRO CARTA1.


    printf("CADASTRO CARTA 1:\n");
    printf("Estado da Carta: \n");
    scanf("%c", &estadoA);
    printf("codigo da carta 1: \n");
    scanf("%s", &codigo_cartaA);
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", &cidadeA);
    printf("Populacao: \n");
    scanf("%f", &populacaoA);
    printf("Area Km: \n");
    scanf("%f", &areaA);
    printf("PIB: \n");
    scanf("%f", &pibA);
    printf("Numero de pontos turísticos: \n");
    scanf("%d", &pontos_turisticosA);
    printf("\n\n");


    //PREENCHIMENTO DE CADASTRO CARTA2.

    printf("CADASTRO CARTA2:\n");
    printf("Estado carta: \n");
    scanf("%c", &estadoB);
    printf("Codigo da carta: \n");
    scanf("%s", &codigo_cartaB);
    printf("Nome da Cidade: \n");
    scanf("%s", &cidadeB);
    printf("Populacao: \n");
    scanf("%f", &populacaoB);
    printf("Area Km: \n");
    scanf("%f", &areaA);
    printf("PIB: \n");
    scanf("%f", &pibA);
    printf("Numero de pontos turísticos: \n");
    scanf("%d", &pontos_turisticosA);
    printf("\n\n");


    //IMPRESSAO DE DADOS DE CADA CARTA 1

    printf("CARTA 1\n");
    printf("Estado:%c\n", estadoA);
    printf("Codigo:%s\n", codigo_cartaA);
    printf("Cidade:%s\n", cidadeA);
    printf("Populacao:%d\n",populacaoA);
    printf("Area km:%f\n", areaA);
    printf("PIB:%f\n", pibA);
    printf("Pontos Turisticos:%d", pontos_turisticosA);
    printf("\n");


    //IMPRESSAO DE DADOS DE CADA CARTA 2

    printf("CARTA 2\n");
    printf("Estado:%c\n", estadoA);
    printf("Codigo:%s\n", codigo_cartaB);
    printf("Cidade:%s\n", cidadeB);
    printf("Populacao:%d\n",populacaoB);
    printf("Area km:%f\n", areaB);
    printf("PIB:%f\n", pibB);
    printf("Pontos Turisticos:%d", pontos_turisticosB);
    printf("\n");


    return 0;
}
