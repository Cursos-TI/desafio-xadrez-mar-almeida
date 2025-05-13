#include <stdio.h>

int main (){

    int torre;
    int bispo = 0; 
    int rainha = 0;
    int cavalo; 
    char UserChoice;
    int escolhacavalo, movimentocompleto = 1;
   
    do
    {
        printf("***XADREZ AVENTUREIRO***\n");
        printf("A. Torre\n");
        printf("B. Bispo\n");
        printf("C. Rainha\n");
        printf("D. Cavalo\n");
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
            
            } else if (UserChoice == 'D' || UserChoice == 'd')
            {
                printf("Você escolheu o Cavalo!\n");

                do
                {
                printf("Escolha o Movimento\n");
                printf("1. Cima, Cima, Direita\n");
                printf("2. Cima, Cima, Esquerda\n");
                printf("3. Esquerda, Esquerda, Cima\n");
                printf("4. Direita, Direita, Cima\n");
                printf("Escolha: ");
                scanf(" %d", &escolhacavalo);
                      
                    switch (escolhacavalo)
                    {
                    case 1:
                        for (int i = 0; i <= movimentocompleto; i++)
                        {
                            printf("Cima\n"); // imprime 'Cima' 2x (i = 0) , (i = 1).
                        }
                    printf("Direita\n"); // imprime 'Direita' 1x
                    movimentocompleto--;
                    break;
                    
                    case 2:
                        for (int i = 0; i <= movimentocompleto; i++)
                        {
                            printf("Cima\n"); // imprime 'Cima' 2x (i = 0) , (i = 1).
                        }
                    printf("Esquerda\n"); // imprime 'Esquerda' 1x
                    movimentocompleto--;
                    break;

                    case 3:
                        for (int i = 0; i <= movimentocompleto; i++)
                        {
                            printf("Esquerda\n"); // imprime 'Esquerda' 2x (i = 0) , (i = 1).
                        }
                    printf("Cima\n"); // imprime 'Cima' 1x
                    movimentocompleto--;
                    break;

                    case 4:
                        for (int i = 0; i <= movimentocompleto; i++)
                        {
                            printf("Direita\n"); // imprime 'Direita' 2x (i = 0) , (i = 1).
                        }
                    printf("Cima\n"); // imprime 'Cima' 1x
                    movimentocompleto--;
                    break;
                    
                    default:
                        printf("Opção Inválida!\n"); // dá loop se for caractere
                    break;
                    }

                } while (escolhacavalo != 1 && escolhacavalo != 2 &&
                    escolhacavalo != 3 && escolhacavalo != 4);
                
            } else {
                printf("Opção Inválida!\n");
            }

    } while ((UserChoice != 'A' && UserChoice != 'a') && 
            (UserChoice != 'B' && UserChoice != 'b') && 
            (UserChoice != 'C' && UserChoice != 'c') &&
            (UserChoice != 'D' && UserChoice != 'd'));

    
    return 0;

}