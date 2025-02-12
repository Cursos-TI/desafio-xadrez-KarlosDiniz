#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Void - para o nivel mestre - movimento peças xadrez:

// Função recursiva para o movimento do Bispo
void movimentoBispo(int cima, int direita) {
    for (cima = 1, direita = 1; cima <= 5, direita <= 5; cima++, direita++) { 
    printf("Movimento do Bispo para %dª casa para cima e %dª casa para direita\n", cima, direita);
    printf("Cima\n");
    printf("Direita\n");
    }
}

// Função recursiva para movimento da Torre
void movimentoTorre(int direita) {
    while (direita <= 5) {
        printf("Movimento da Torre para %dª casa à direita\n", direita);
        printf("Direita\n");
        direita++;
    }
}

// Função recursiva para movimento da Rainha
void movimentoRainha(int esquerda) {
    for (esquerda; esquerda <= 8; esquerda++) {
        printf("Movimento da Rainha para %dª casa à esquerda\n", esquerda);
        printf("Esquerda\n");
    }
}

// Função recursiva para movimento do Cavalo
void movimentoCavalo(int baixo, int esquerda) {
    for (baixo = 1; baixo <= 2; baixo++) {
        printf("Movimento do Cavalo para %dª casa para baixo\n", baixo);
        printf("Baixo\n");
        
        // Uso do continue e break dentro do loop
        if (baixo == 2) {
            for (baixo; esquerda <= 1; esquerda++) {
                printf("Movimento do Cavalo para %dª casa para esquerda\n", esquerda);
                printf("Esquerda\n");
                if (esquerda == 1) {
                    break; // Interrompe o loop quando esquerda é 1
                }
            }
        } else {
            continue; // Continua o loop quando baixo não é 2
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //Iniciando o código do Desafio Xadrez - Nivel Novato - Movimentação das peças:
    // - Bispo: 5 casas na diagonal superior direita
    // - Torre: 5 casas para a direita
    // - Rainha: 8 casas para a esquerda

    int cima, baixo, direita, esquerda;

    // movimento do Bispo limitado a 5 casas sendo cima e direita para um movimento na diagonal
    printf("*** MOVIMENTAÇÃO - NIVEL NOVATO *** \n\n");
    printf("\nIniciando a movimentação do Bispo: 5 casas na diagonal superior direita:\n");
    cima = 1;
    direita = 1;
    while (cima <=5)
    {
        printf("Movimento do Bispo para %dª casa para cima e %dª casa para direita\n", cima, direita);
        printf("Cima\n");
        printf("Direita\n");
        cima++;
        direita++;
    }
    // movimento do Torre limitado a 5 casas para a direita
    printf("\nIniciando a movimentação da Torre 5 casas para a direita:\n");
    direita = 1;
    do
    {
        printf("Movimento da Torre para %dª casa à direita\n", direita);
        printf("Direita\n");
        direita++;
    } while (direita <=5);

    // movimento da Rainha limitado a 8 casas para a esquerda
    printf("\nIniciando a movimentação da Rainha: 8 casas para a esquerda:\n");
    esquerda = 1;
    for (esquerda; esquerda <=8; esquerda++)
    {
        printf("Movimento da Rainha para %dª casa à esquerda\n", esquerda);
        printf("Esquerda\n");
    }
    printf("\n"); // apenas para dar uma espaço de linha a mais no final
    
    //Iniciando o código do Desafio Xadrez - Nivel Aventureiro - Movimentação das peças:
    // - **Movimentação do Cavalo:**
    // Mover o cavalo em L utilizando loops aninhados.
    // Obs: É obrigatório o uso de loops aninhados.  
    // Para o desafio, moveremos o cavalo, que possui sua movimentação em L. 
    // O cavalo deve se movimentar para baixo e para a esquerda, 
    // usando pelo menos duas estruturas de repetição: 
    // uma deve ser for e a outra pode ser while ou do-while.
    
    // movimento do Cavalo, dois para baixo e um para esquerda

    esquerda = 1;
    printf("\n*** MOVIMENTAÇÃO - NIVEL AVENTUREIRO *** \n\n");
    printf("\nIniciando a movimentação do Cavalo: 2 casas para baixo e 1 para esquerda:\n");

    for(int baixo = 1; baixo <= 2; baixo++){

        while (baixo <= 2)
        {
            printf("Movimento do Cavalo para %dª casa para baixo\n", baixo);
            printf("Baixo\n");
            baixo++;
        }
        printf("Movimento do Cavalo para %dª casa para esquerda\n", esquerda);
        printf("Esquerda\n");
    }

    // Nível Mestre
    // Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por funções recursivas, 
    // e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, 
    // permitindo o uso de continue e break.

    // Movimentação das Peças:

    // Bispo: 5 casas na diagonal direita para cima 
    // Torre: 5 casas para a direita 
    // Rainha: 8 casas para a esquerda 
    // Cavalo: 1 vez em L para cima à direita 
    // Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

    // *** Comando void para "função recursiva" incluída no início do código

    printf("\n\n*** MOVIMENTAÇÃO - NIVEL MESTRE *** \n\n");

    // Iniciando a movimentação do Bispo
    printf("\nIniciando a movimentação do Bispo: 5 casas na diagonal superior direita:\n");
    movimentoBispo(1, 1); // Chamada da função recursiva

    // Iniciando a movimentação da Torre
    printf("\nIniciando a movimentação da Torre 5 casas para a direita:\n");
    movimentoTorre(1); // Chamada da função recursiva

    // Iniciando a movimentação da Rainha
    printf("\nIniciando a movimentação da Rainha: 8 casas para a esquerda:\n");
    movimentoRainha(1); // Chamada da função recursiva

    // Iniciando a movimentação do Cavalo
    printf("\nIniciando a movimentação do Cavalo: 2 casas para baixo e 1 para esquerda:\n");
    movimentoCavalo(1, 1); // Chamada da função recursiva

    return 0;
}