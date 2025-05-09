#include <stdio.h>

int main (){

    int torre;
    int bispo = 0; 
    int rainha = 0; 
    char UserChoice;
   
    do
    {
        printf("***XADREZ NOVATO***\n");
        printf("A. Torre\n");
        printf("B. Bispo\n");
        printf("C. Rainha\n");
        printf("Escolha: ");
        scanf(" %c", &UserChoice);
            if (UserChoice == 'A' || UserChoice == 'a')
            {
                printf("Você escolheu a Torre!\n");
                for (torre = 0; torre < 5; torre++)
                {
                    printf("Cima\n");
                }
                
            } else if (UserChoice == 'B' || UserChoice == 'b')
            {
                printf("Você escolheu o Bispo!\n");
                do
                {
                    printf("Cima + Direita\n");
                    bispo++;

                } while (bispo < 5);
                
            } else if (UserChoice == 'C' || UserChoice == 'c')
            {
                printf("Você escolheu a Rainha!\n");
                while (rainha < 8)
                {
                    printf("Esquerda\n");
                    rainha++;
                }

            } else {
                printf("Opção Inválida!\n");
            }

    } while ((UserChoice != 'A' && UserChoice != 'a') && 
            (UserChoice != 'B' && UserChoice != 'b') && 
            (UserChoice != 'C' && UserChoice != 'c'));

    
    return 0;

}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


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
