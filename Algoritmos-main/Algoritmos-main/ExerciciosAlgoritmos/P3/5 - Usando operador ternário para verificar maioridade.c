// Usando operador ternário para verificar maioridade
#include <stdio.h>

int main()
{
    int idades[4] = {15, 22, 18, 30}; // Vetor com idades

    // Percorre todas as idades
    for (int i = 0; i < 4; i++)
    {
        // Usa o operador ternário para decidir a mensagem
        printf("Idade %d: %s\n", idades[i],
               (idades[i] >= 18) ? "Maior de idade" : "Menor de idade");
    }

    return 0; // Fim do programa
}
