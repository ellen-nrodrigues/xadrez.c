#include <stdio.h>

int main() {
    int torre = 0;
    int bispo = 0;
    int rainha = 0;

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
    

return 0;
}