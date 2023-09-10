#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O código ASCII em decimal é: %d\n", caractere);
    printf("O código ASCII em hexadecimal é: %x\n", caractere);

    return 0;
}
