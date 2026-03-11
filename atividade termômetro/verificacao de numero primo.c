#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool primo = true;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n <= 1) primo = false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) printf("%d é primo.\n", n);
    else printf("%d não é primo.\n", n);

    return 0;
}