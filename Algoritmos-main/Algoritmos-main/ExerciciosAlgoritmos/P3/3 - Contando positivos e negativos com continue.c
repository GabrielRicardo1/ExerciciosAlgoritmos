// Contando positivos e negativos com continue
#include <stdio.h>

int main()
{
    int v[7] = {-3, 0, 5, -1, 4, -6, 2}; // Vetor com valores variados
    int positivos = 0, negativos = 0; // Contadores

    // Percorre todos os elementos
    for (int i = 0; i < 7; i++)
    {
        if (v[i] == 0) continue; // Se for zero, ignora e passa para o próximo
        if (v[i] > 0) positivos++; // Se for positivo, incrementa contador
        else negativos++; // Caso contrário, é negativo
    }

    // Exibe os resultados
    printf("Positivos = %d, Negativos = %d\n", positivos, negativos);
    return 0;
}
