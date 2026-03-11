#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    printf("Digite uma frase: ");
    setbuf(stdin, NULL); //Limpa o buffer
    fgets(texto, 100, stdin);

    // Remove o '\n' que o fgets captura no final
    texto[strcspn(texto, "\n")] = 0;

    printf("A string possui %d caracteres.\n", (int)strlen(texto));
    return 0;
}