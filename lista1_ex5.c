#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    
    if (num2 != 0)
         printf("A divisão de %d por %d é: %.2f\n", num1, num2, (float)num1/num2);
    else
        printf("Não é possível realizar a divisão, pois o segundo número é zero.\n");

    printf("A soma de %d e %d é: %.2f\n", num1, num2, num1 + num2);
    printf("A subtração de %d por %d é: %.2f\n", num1, num2, num1 - num2);
    printf("A multiplicação de %d por %d é: %.2f\n", num1, num2, num1 * num2);

    return 0;
}
