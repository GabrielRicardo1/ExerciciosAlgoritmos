// Menu com switch que soma ou multiplica vetor
#include <stdio.h>

int main()
{
    int v[4] = {2, 3, 4, 5}; // Vetor de inteiros
    int opcao, i; // Variáveis de opção e índice

    // Mostra menu
    printf("1 - Somar\n2 - Multiplicar\n");
    scanf("%d", &opcao); // Lê escolha do usuário

    // Usa switch para tratar a escolha
    switch (opcao)
    {
    case 1:
    {
        int soma = 0; // Acumulador
        for (i = 0; i < 4; i++) soma += v[i]; // Soma todos
        printf("Soma = %d\n", soma);
        break;
    }
    case 2:
    {
        int prod = 1; // Produto acumulado
        for (i = 0; i < 4; i++) prod *= v[i]; // Multiplica todos
        printf("Produto = %d\n", prod);
        break;
    }
    default:
        printf("Opcao invalida\n"); // Caso nenhuma opção válida
    }

    return 0; // Fim
}
