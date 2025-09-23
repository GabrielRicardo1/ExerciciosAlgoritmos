// Usando while para validar entrada (apenas 1 a 5)
#include <stdio.h>

int main()
{
    int nota; // Variável para guardar nota

    printf("Digite uma nota de 1 a 5: ");
    scanf("%d", &nota); // Lê a primeira tentativa

    // Enquanto a nota não estiver no intervalo
    while (nota < 1 || nota > 5)
    {
        printf("Valor invalido! Digite de 1 a 5: ");
        scanf("%d", &nota); // Lê novamente
    }

    // Quando o laço termina, a nota é válida
    printf("Nota registrada: %d\n", nota);
    return 0;
}
