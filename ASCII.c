#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O c�digo ASCII em decimal �: %d\n", caractere);
    printf("O c�digo ASCII em hexadecimal �: %x\n", caractere);

    return 0;
}
