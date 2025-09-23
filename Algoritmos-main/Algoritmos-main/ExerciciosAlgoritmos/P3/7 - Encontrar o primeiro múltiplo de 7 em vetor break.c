// Encontrar o primeiro múltiplo de 7 em vetor (break)
#include <stdio.h>

int main()
{
    int v[6] = {5, 10, 14, 9, 21, 30}; // Vetor de inteiros
    int i, achou = 0; // Índice e flag

    // Percorre vetor
    for (i = 0; i < 6; i++)
    {
        if (v[i] % 7 == 0)   // Se o valor é múltiplo de 7
        {
            printf("Primeiro multiplo de 7: %d\n", v[i]);
            achou = 1; // Marca que encontrou
            break; // Sai do laço
        }
    }

    if (!achou) // Se não encontrou nenhum
        printf("Nenhum multiplo de 7 encontrado.\n");

    return 0; // Fim
}
