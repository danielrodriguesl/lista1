#include <stdio.h>

int main() {
    int secs, hrs, mins, secs_r;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &secs);
    hrs = secs / 3600;
    secs_r = secs % 3600;
    mins = secs_r / 60;
    printf("\nO tempo equivalente é: %d horas, %d minutos e %d segundos.\n", hrs, mins, secs_r % 60);

    return 0;
}
