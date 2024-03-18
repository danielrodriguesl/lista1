#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro número inteiro: ");
    scanf("%d", &num3);
    printf("\nA média aritmética de %d, %d e %d é: %.2f\n", num1, num2, num3, (num1 + num2 + num3) / 3.0);

    return 0;
}