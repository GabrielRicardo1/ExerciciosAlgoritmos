// 1 – Contando quantos números maiores que a média existem

#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
    int v[6] = {3, 7, 8, 5, 10, 2}; // Declara vetor com 6 inteiros
    int soma = 0, i; // Variáveis: soma acumulada e índice

    // Laço para calcular a soma de todos os elementos
    for (i = 0; i < 6; i++)
    {
        soma += v[i]; // Acumula cada elemento
    }

    float media = soma / 6.0; // Divide soma pelo total para achar a média
    int cont = 0; // Conta quantos valores são maiores que a média

    // Verifica cada elemento novamente
    for (i = 0; i < 6; i++)
    {
        if (v[i] > media)   // Se o elemento é maior que a média
        {
            cont++; // Incrementa o contador
        }
    }

    printf("Media = %.2f\n", media); // Mostra a média com 2 casas decimais
    printf("Elementos maiores que a media = %d\n", cont); // Mostra o resultado final
    return 0; // Indica fim do programa
}
