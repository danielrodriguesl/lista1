#include <stdio.h>

int main() {
    float graus;

    printf("Digite a temperatura em graus centígrados: ");
    scanf("%f", &graus);
    printf("%.2f graus centígrados equivalem a %.2f graus Fahrenheit.\n", graus, (9 * graus + 160) / 5);

    return 0;
}
