#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a dist�ncia percorrida: ");
    scanf("%f", &distancia);
    printf("Digite o total de litros gastos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("O consumo m�dio �: %.2f km/l\n", consumo);

    return 0;
}
