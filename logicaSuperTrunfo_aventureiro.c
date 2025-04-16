#include <stdio.h> 
#include <stdlib.h>

int main() { 
    char est1[20], est2[20], cod1[10], cod2[10], pais1[50], pais2[50];           
    int pontotur, pontotur1, pontotur2, populacao, pop1, pop2, opcao;                                        
    float area, area1, area2, pib, pib1, pib2, densidade_pop, densidade_pop1, densidade_pop2, pib_percapita, pib_percapita1, pib_percapita2;
    
    printf("Preencha abaixo os dados da Carta 1: \n"); //o comando "printf" serve para saída de dados, ou seja, imprime os dados na tela. 
    printf("Por favor, escolha um estado dentre os 8 listados a seguir: 'A, B, C, D, E, F, G ou H' e escreva sua escolha abaixo: \n"); //o comando \n serve para 'quebrar' linha
    scanf("%s", &est1); //o comando scanf serve para entrada de dados, o % é o especificador de formato, no caso, o %s está especificando que o formato a ser lido é uma string. 
    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida de um número de 01 a 04, por exemplo: A01 ou C04. \n");
    scanf("%s", &cod1);
    printf("Digite o nome do país: \n");
    scanf("%s", &pais1);
    printf("Digite o número de habitantes do país: \n");
    scanf("%u", &pop1); //%u está especificando que o formato a ser lido é um número inteiro positivo
    printf("Digite a área do país em quilômetros quadrados, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &area1); //%f está especificando que o formato a ser lido é um número decimal
    printf("Digite o Produto Interno Bruto do país, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos do país: \n");
    scanf("%d", &pontotur1);

    printf("Agora preencha abaixo os dados da Carta 2: \n");
    printf("Por favor, escolha um estado dentre os 8 listados a seguir: 'A, B, C, D, E, F, G ou H' e escreva sua escolha abaixo: \n");
    scanf("%s", &est2);
    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida de um número de 01 a 04, por exemplo: A01 ou C04. \n");
    scanf("%s", &cod2);
    printf("Digite o nome do país: \n");
    scanf("%s", &pais2);
    printf("Digite o número de habitantes do país: \n");
    scanf("%u", &pop2);
    printf("Digite a área do país em quilômetros quadrados, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto do país, por favor, utilize apenas números, sem pontuação: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos do país: \n");
    scanf("%d", &pontotur2);
   
    densidade_pop1 = (float) pop1 / area1; //utilização de casting para converter variáveis de tipos diferentes
    densidade_pop2 = (float) pop2 / area2;
    pib_percapita1 = (float) pib1 / pop1;
    pib_percapita2 = (float) pib2 / pop2;
    
    printf("Comparação de cartas\n");
    printf("Qual dos atributos abaixo deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: \n");
    scanf("%d", &opcao);
    
    switch (opcao) { // O "switch" funciona como um menu.
        case 1:     // caso a variável tenha armazenado o valor 1, será executado o código abaixo até a opção break, que serve para parar a execução.
            printf("Atributo Escolhido: População\n");
            printf("País 1:  %s - País 2: %s\n", pais1, pais2);
            printf("População da Carta 1: %d - População da Carta 2: %d\n", pop1, pop2);
            if (pop1 > pop2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pop1 < pop2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 2:     // caso a variável tenha armazenado o valor 2, será executado o código abaixo até a opção break, que serve para parar a execução.
            printf("Atributo Escolhido: Área\n");
            printf("País 1:  %s - País 2: %s\n", pais1, pais2);
            printf("Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 3:     // caso a variável tenha armazenado o valor 3, será executado o código abaixo até a opção break, que serve para parar a execução.
            printf("Atributo Escolhido: PIB\n");
            printf("País 1:  %s - País 2: %s\n", pais1, pais2);
            printf("PIB da Carta 1: %.2f - PIB da Carta 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 4:     // caso a variável tenha armazenado o valor 4, será executado o código abaixo até a opção break, que serve para parar a execução.
            printf("Atributo Escolhido: Número de pontos turísticos\n");
            printf("País 1:  %s - País 2: %s\n", pais1, pais2);
            printf("Pontos turísticos da Carta 1: %d - Pontos turísticos da Carta 2: %d\n", pontotur1, pontotur2);
            if (pontotur1 > pontotur2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pontotur1 < pontotur2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        case 5:     // caso a variável tenha armazenado o valor 5, será executado o código abaixo até a opção break, que serve para parar a execução.
            printf("Atributo Escolhido: Densidade demográfica\n");
            printf("País 1:  %s - País 2: %s\n", pais1, pais2);
            printf("Densidade demográfica da Carta 1: %.2f - Densidade demográfica da Carta 2: %.2f\n", densidade_pop1, densidade_pop2);
            if (densidade_pop1 < densidade_pop2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (densidade_pop1 > densidade_pop2) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
        break;
        default:    // caso a variável tenha armazenado outra opção, diferente dos números de 1 a 5, será executado o código abaixo.
            printf("Opção inválida!");
        break;

    }

    return 0; 

} 