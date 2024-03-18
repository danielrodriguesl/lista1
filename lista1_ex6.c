#include <stdio.h>

int main() {
    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);
    printf("\nUm quarto de %.2f é: %.2f\n", num,  num / 4.0);

    return 0;
}