#include <stdio.h> 
#include <stdlib.h>

int main() { 
    char est1[2], est2[2], cod1[10], cod2[10], pais1[50], pais2[50];           
    int pontotur, pontotur1, pontotur2, populacao, pop1, pop2, atributo1, atributo2, resultado1, resultado2;                                       
    float area, area1, area2, pib, pib1, pib2, densidade_pop, densidade_pop1, densidade_pop2, pib_percapita, pib_percapita1, pib_percapita2;
    float somaAbrib1Carta1 = 0, somaAbrib1Carta2 = 0, somaAbrib2Carta1 = 0, somaAbrib2Carta2 = 0;
    
    printf("Preencha abaixo os dados da Carta 1: \n"); //o comando "printf" serve para saída de dados, ou seja, imprime os dados na tela. 
    printf("Por favor, escolha um estado dentre os 8 listados a seguir: 'A, B, C, D, E, F, G ou H' e escreva sua escolha abaixo: \n"); //o comando \n serve para 'quebrar' linha
    scanf("%s", &est1); //o comando scanf serve para entrada de dados, o % é o especificador de formato, no caso, o %s está especificando que o formato a ser lido é uma string. 
    printf("Digite o código da carta, que deverá ser composto pela letra do estado seguida de um número de 01 a 04, por exemplo: A01 ou C04. \n");
    scanf("%s", &cod1);
    printf("Digite o nome do país: \n");
    scanf("%s", &pais1);
    printf("Digite o número de habitantes do país: \n");
    scanf("%d", &pop1); //%d está especificando que o formato a ser lido é um número inteiro
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
    scanf("%d", &pop2);
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
    
    
    printf("***COMPARAÇÃO ENTRE DOIS ATRIBUTOS DAS CARTAS***\n");
    printf("***ATENÇÃO! Não escolha atributos iguais ou o jogo se encerrará!!!***\n");
    printf("Qual o primeiro atributo que deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: \n");
    scanf("%d", &atributo1);

    printf("Qual o segundo atributo que deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: \n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você escolheu atributos iguais, portanto, jogo encerrado!");

    } else if (atributo1 != atributo2) {
        
        switch (atributo1) {    // O "switch" funciona como um menu.
            case 1:             // Caso o atributo 1 receba 1, o código dentro do case será executado até parar no "break", e assim sucessivamente para os outros "cases"
                printf("Atributo 1 Escolhido: População\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("População da Carta 1: %d - População da Carta 2: %d\n", pop1, pop2);
                if (pop1 > pop2) {  //aqui está sendo feito a comparação das cartas do primeiro embate
                    printf("No primeiro embate: Carta 1 venceu!\n\n");
                } else if (pop1 < pop2) {
                    printf("No primeiro embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib1Carta1 = pop1;  //essas variáveis (somaAtrib1Carta1 e somaAtrib1Carta2) armazenarão o valor do atributo 1 de cada carta para ser somada posteriormente ao atributo 2
                somaAbrib1Carta2 = pop2;
            break;
            case 2:    
                printf("Atributo 1 Escolhido: Área\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
                if (area1 > area2) {
                    printf("No primeiro embate: Carta 1 venceu!\n\n");
                } else if (area1 < area2) {
                    printf("No primeiro embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib1Carta1 = area1;
                somaAbrib1Carta2 = area2;
            break;
            case 3:    
                printf("Atributo 1 Escolhido: PIB\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("PIB da Carta 1: %.2f - PIB da Carta 2: %.2f\n", pib1, pib2);
                if (pib1 > pib2) {
                    printf("No primeiro embate: Carta 1 venceu!\n\n");
                } else if (pib1 < pib2) {
                    printf("No primeiro embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib1Carta1 = pib1;
                somaAbrib1Carta2 = pib2;
            break;
            case 4:    
                printf("Atributo 1 Escolhido: Pontos turísticos\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("Pontos turísticos da Carta 1: %.d - Pontos turísticos da Carta 2: %.d\n\n", pontotur1, pontotur2);
                if (pontotur1 > pontotur2) {
                    printf("No primeiro embate: Carta 1 venceu!\n\n");
                } else if (pontotur1 < pontotur2) {
                    printf("No primeiro embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib1Carta1 = pontotur1;
                somaAbrib1Carta2 = pontotur2;
            break;            
            case 5:    
                printf("Atributo 1 Escolhido: Densidade demográfica\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("Densidade Carta 1: %.2f - Densidade Carta 2: %.2f\n", densidade_pop1, densidade_pop2);
                if (densidade_pop1 < densidade_pop2) {
                    printf("No primeiro embate: Carta 1 venceu!\n\n");
                } else if (densidade_pop1 > densidade_pop2) {
                    printf("No primeiro embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib1Carta1 = densidade_pop1;
                somaAbrib1Carta2 = densidade_pop2;

            break;
            default:
                printf("Opção inválida para o atributo 1!\n\n");
            break;             
                                
        }

        switch (atributo2) { 
            case 1:         // Caso o atributo 2 receba 1, o código dentro do case será executado até parar no "break", e assim sucessivamente para os outros "cases"
                printf("Atributo 2 Escolhido: População\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("População da Carta 1: %d - População da Carta 2: %d\n", pop1, pop2);
                if (pop1 > pop2) {  //aqui está sendo feito a comparação das cartas do segundo embate
                    printf("No segundo embate: Carta 1 venceu!\n\n");
                } else if (pop1 < pop2) {
                    printf("No segundo embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib2Carta1 = pop1; //essas variáveis (somaAtrib2Carta1 e somaAtrib2Carta2) armazenarão o valor do atributo 2 de cada carta para ser somada ao atributo 1
                somaAbrib2Carta2 = pop2;
            break;
            case 2:    
                printf("Atributo 2 Escolhido: Área\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
                if (area1 > area2) {
                    printf("No segundo embate: Carta 1 venceu!\n\n");
                } else if (area1 < area2) {
                    printf("No segundo embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib2Carta1 = area1;
                somaAbrib2Carta2 = area2;
            break;
            case 3:    
                printf("Atributo 2 Escolhido: PIB\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("PIB da Carta 1: %.2f - PIB da Carta 2: %.2f\n", pib1, pib2);
                if (pib1 > pib2) {
                    printf("No segundo embate: Carta 1 venceu!\n\n");
                } else if (pib1 < pib2) {
                    printf("No segundo embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib2Carta1 = pib1;
                somaAbrib2Carta2 = pib2;
            break;
            case 4:    
                printf("Atributo 2 Escolhido: Pontos turísticos\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("Pontos turísticos da Carta 1: %.d - Pontos turísticos da Carta 2: %.d\n", pontotur1, pontotur2);
                if (pontotur1 > pontotur2) {
                    printf("No segundo embate: Carta 1 venceu!\n\n");
                } else if (pontotur1 < pontotur2) {
                    printf("No segundo embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib2Carta1 = pontotur1;
                somaAbrib2Carta2 = pontotur2;
            break;            
            case 5:    
                printf("Atributo 2 Escolhido: Densidade demográfica\n");
                printf("País 1: %s - País 2: %s\n", pais1, pais2);
                printf("Densidade Carta 1: %.2f - Densidade Carta 2: %.2f\n", densidade_pop1, densidade_pop2);
                if (densidade_pop1 < densidade_pop2) {
                    printf("No segundo embate: Carta 1 venceu!\n\n");
                } else if (densidade_pop1 > densidade_pop2) {
                    printf("No segundo embate: Carta 2 venceu!\n\n");
                } else {
                    printf("Empate!\n\n");
                }
                somaAbrib2Carta1 = densidade_pop1;
                somaAbrib2Carta2 = densidade_pop2;
            break;
            default:
                printf("Opção inválida para o atributo 2!\n\n");
            break;            

        }
        // abaixo estão as saídas do programa.

        printf("Soma dos atributos da Carta 1: %.2f\n", somaAbrib1Carta1 + somaAbrib2Carta1);
        printf("Soma dos atributos da Carta 2: %.2f\n", somaAbrib1Carta2 + somaAbrib2Carta2);

        if ((somaAbrib1Carta1 + somaAbrib2Carta1 > somaAbrib1Carta2 + somaAbrib2Carta2)) {
            printf("Resultado final: Carta 1 venceu!\n");
        } else if ((somaAbrib1Carta1 + somaAbrib2Carta1 < somaAbrib1Carta2 + somaAbrib2Carta2)){
            printf("Resultado final: Carta 2 venceu!\n");
        } else {
            printf("Resultado final: Houve empate!\n");
        }

    }
          
    return 0;

} 