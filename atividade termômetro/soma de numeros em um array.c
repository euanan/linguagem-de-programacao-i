#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma total: %d\n", soma);
    return 0;
}