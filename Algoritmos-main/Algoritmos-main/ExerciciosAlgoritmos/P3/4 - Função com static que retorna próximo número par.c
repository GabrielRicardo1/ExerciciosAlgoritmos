// Função com static que retorna próximo número par
#include <stdio.h>

// Função que retorna o próximo número par a cada chamada
int proximoPar()
{
    static int atual = 0; // Variável estática mantém o valor entre chamadas
    atual += 2; // Soma 2 a cada vez que a função é chamada
    return atual; // Retorna o valor atualizado
}

int main()
{
    // Chama a função 5 vezes
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", proximoPar()); // Imprime o número retornado
    }
    return 0; // Fim do programa
}
