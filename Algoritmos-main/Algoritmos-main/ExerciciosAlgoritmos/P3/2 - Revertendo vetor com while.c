// Revertendo vetor com while
#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
    int v[5] = {1, 2, 3, 4, 5}; // Vetor inicial
    int i = 0, j = 4; // Índices para início e fim do vetor

    // Enquanto i for menor que j, troca elementos
    while (i < j)
    {
        int temp = v[i]; // Guarda temporariamente v[i]
        v[i] = v[j]; // Substitui posição inicial pelo valor final
        v[j] = temp; // Coloca o valor inicial na posição final
        i++; // Avança para frente
        j--; // Retrocede para trás
    }

    // Mostra o vetor invertido
    for (i = 0; i < 5; i++)
        printf("%d ", v[i]);

    return 0; // Fim do programa
}
