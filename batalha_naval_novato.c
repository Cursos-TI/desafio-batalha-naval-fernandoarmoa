#include <stdio.h>

int main(){

    // declarando as variáveis
    char cabecalhoColuna[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int cabecalhoLinha[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10];
    int posicaoNavioH[] = {2, 1}, posicaoNavioV[] = {5, 5};
    int tamanhoNavioH = 3, tamanhoNavioV = 3;

    // populando a matriz tabuleiro
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            tabuleiro[x][y] = 0;
        }
        
    }

    printf("\n\n ##-- BATALHA NAVAL --## \n\n\n");
    // imprimindo o tabuleiro
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", cabecalhoColuna[i]);
    }
    
    printf("\n");

    // laço de repetição da linha
    for (int x = 0; x < 10; x++)
    {
        if (x != 9)
        {
            printf("%d  ", cabecalhoLinha[x]);
        }
        else
        {
            printf("%d ", cabecalhoLinha[x]);
        }

        // laço de repetição da coluna
        for (int y = 0; y < 10; y++)
        {   
            // verificando se é a posição inicial do navio da horizontal
            if (x == posicaoNavioH[0] && y == posicaoNavioH[1])
            {
                for (int i = 0; i < tamanhoNavioH; i++)
                {
                    printf("3 ");
                    y++;
                }
                y--;
            }
            // verificando se é a posição inicial do navio da vertical
            else if ((x >= posicaoNavioV[0] && x < (posicaoNavioV[0] + tamanhoNavioV)) && y == posicaoNavioV[1])
            {
                printf("3 ");
            }
            else
            {
                printf("%d ", tabuleiro[x][y]);
            }
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}
