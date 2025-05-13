#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n"); // loop limitado pelo num de casas
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    for (int i = 0; i < casas; i++) // loop para movimento vertical (limite = num casas)
    {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) // loop para movimento horizontal (só executa 1x: 'j < 1')
        { 
            printf("Direita\n");
        }
    }
}

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main (){

    char UserChoice;
    int escolhacavalo;
   
    do // do-while para fazer o menu de escolha da peça do usuario
    {
        printf("***XADREZ MESTRE***\n");
        printf("A. Torre\n");
        printf("B. Bispo\n");
        printf("C. Rainha\n");
        printf("D. Cavalo\n");
        printf("Escolha: ");
        scanf(" %c", &UserChoice);
            if (UserChoice == 'A' || UserChoice == 'a')
            {
                printf("Você escolheu a Torre!\n");
                moverTorre(5); // chamada da funcao recursiva
                
            } else if (UserChoice == 'B' || UserChoice == 'b')
            {
                printf("Você escolheu o Bispo!\n");
                moverBispo(5); // chamada da funcao recursiva
                
            } else if (UserChoice == 'C' || UserChoice == 'c')
            {
                printf("Você escolheu a Rainha!\n");
                moverRainha(8); // chamada da funcao recursiva
            
            } else if (UserChoice == 'D' || UserChoice == 'd')
            {
                printf("Você escolheu o Cavalo!\n");

                do // do-while para fazer o loop do menu de movimento do cavalo
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
                        for (int i = 0; i <= 1; i++) 
                        {
                            printf("Cima\n"); // imprime 'Cima' 2x (i = 0) , (i = 1).
                        }
                        printf("Direita\n"); // imprime 'Direita' 1x
                        
                        
                    break;
                    
                    case 2:
                        for (int i = 0; i <= 1; i++)
                        {
                            printf("Cima\n"); // imprime 'Cima' 2x (i = 0) , (i = 1).
                        }
                        printf("Esquerda\n"); // imprime 'Esquerda' 1x
                    break;

                    case 3:
                        for (int i = 0; i <= 1; i++)
                        {
                            printf("Esquerda\n"); // imprime 'Esquerda' 2x (i = 0) , (i = 1).
                        }
                        printf("Cima\n"); // imprime 'Cima' 1x
                    break;

                    case 4:
                        for (int i = 0; i <= 1; i++)
                        {
                            printf("Direita\n"); // imprime 'Direita' 2x (i = 0) , (i = 1).
                        }
                        printf("Cima\n"); // imprime 'Cima' 1x
                    break;
                    
                    default:
                        printf("Opção Inválida!\n"); // dá loop se for caractere!!
                    break;
                    }

                } while ((escolhacavalo != 1) && (escolhacavalo != 2) && 
                        (escolhacavalo != 3) && (escolhacavalo != 4));
                // acima condicoes validas para o do-while da escolha de movimento do cavalo
            } else {
                printf("Opção Inválida!\n");
            }

    } while ((UserChoice != 'A' && UserChoice != 'a') && 
            (UserChoice != 'B' && UserChoice != 'b') && 
            (UserChoice != 'C' && UserChoice != 'c') &&
            (UserChoice != 'D' && UserChoice != 'd'));
            //acima, condicoes validas para o do-while de escolha de peça do usuario

    
    return 0;

}