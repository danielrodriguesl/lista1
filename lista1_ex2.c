#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("\nA soma de %d e %d é: %d\n", num1, num2, num1+num2);

    return 0;
}