// Imprimindo tabuada apenas dos números ímpares
#include <stdio.h>

int main()
{
    int numeros[5] = {2, 3, 4, 5, 6}; // Vetor com 5 números

    // Percorre todos os elementos
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0) continue; // Se for par, ignora

        printf("\nTabuada do %d:\n", numeros[i]); // Título
        for (int j = 1; j <= 10; j++)   // Calcula a tabuada
        {
            printf("%d x %d = %d\n", numeros[i], j, numeros[i] * j);
        }
    }

    return 0; // Fim
}
