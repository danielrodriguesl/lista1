#include <stdio.h>

int main() {
    float saldo;

    printf("Digite o saldo atual da conta poupança: ");
    scanf("%f", &saldo);
    printf("O novo saldo da conta poupança, com um reajuste de 2%%, é: %.2f\n",  saldo * 1.02);

    return 0;
}
