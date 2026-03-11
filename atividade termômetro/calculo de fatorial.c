#include <stdio.h>

int main() {
    int n;
    long long fat = 1;
    printf("Digite um número para o fatorial: ");
    scanf("%d", &n);

    for (int i = n; i > 1; i--) {
        fat *= i;
    }

    printf("Fatorial de %d = %lld\n", n, fat);
    return 0;
}