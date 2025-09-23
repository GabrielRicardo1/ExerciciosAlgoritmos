// Misturando tudo: vetor + ternário + switch + loops
#include <stdio.h>

int main()
{
    int v[5] = {12, 7, 5, 20, 15}; // Vetor de inteiros
    int opcao; // Escolha do usuário

    // Menu
    printf("Menu:\n1 - Mostrar pares\n2 - Mostrar impares\n");
    scanf("%d", &opcao); // Lê opção

    switch (opcao)
    {
    case 1:
        // Percorre e imprime somente pares
        for (int i = 0; i < 5; i++)
        {
            (v[i] % 2 == 0) ? printf("%d ", v[i]) : 0;
        }
        break;
    case 2:
        // Percorre e imprime somente ímpares
        for (int i = 0; i < 5; i++)
        {
            (v[i] % 2 != 0) ? printf("%d ", v[i]) : 0;
        }
        break;
    default:
        printf("Opcao invalida.\n"); // Caso nenhuma opção válida
    }

    return 0; // Fim do programa
}
