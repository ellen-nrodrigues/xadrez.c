#include <stdio.h>

int main() {
    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;
    int Cavalo = 0;

    printf("\n---MOVIMENTO TORRE---\n");
    // Movimentação da torre "5 casas para a direita"
    for (torre = 0; torre <= 4; torre++)
    {
        printf("%d DIREITA\n", torre + 1);
    }
    
    printf("\n---MOVIMENTO BISPO---\n");
    // Movimentação do bispo "5 casas para a diagonal direita para cima"
    while (bispo <= 4)
    {
        printf("%d CIMA DIREITA\n", bispo + 1);
        bispo++;
    }
    

    printf("\n---MOVIMENTO RAINHA---\n");
    // Movimentação da rainha "8 casas para a esquerda"
    do
    {
        printf("%d ESQUERDA\n", rainha + 1);
        rainha++;
    } while (rainha <= 7);
    


    printf("\n---MOVIMENTO CAVALO---\n");
    // Movimentação do cavalo "fazer o L para 2 para baixo e 1 para a esquerda"

    for (cavalo = 0; cavalo < 1; cavalo++)
    {
        while (Cavalo < 2)
        {
            printf("BAIXO\n"); 
           Cavalo++;
        } 
        printf("ESQUERDA\n", cavalo);
    }

return 0;
}