#include <stdio.h>

int main(){
    int n;

    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    prinf("\n");
    return 0;
}