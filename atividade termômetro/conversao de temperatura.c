#include <stdio.h>

int main() {
    float c, f;
    int opcao;

    printf("1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\nEscolha: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Graus Celsius: ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("%.2f C = %.2f F\n", c, f);
    } else {
        printf("Graus Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) / 1.8;
        printf("%.2f F = %.2f C\n", f, c);
    }
    return 0;
}