#include <stdio.h>

long long int calcularPotencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else if (expoente < 0) {
        return 1 / calcularPotencia(base, -expoente);
    } else {
        return base * calcularPotencia(base, expoente - 1);
    }
}

int main() {
    int base, expoente;

    printf("Digite a base (numero inteiro): ");
    scanf("%d", &base);

    printf("Digite o expoente (numero inteiro): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("O expoente deve ser nao negativo para este exemplo.\n");
    } else {
        long long int resultado = calcularPotencia(base, expoente);
        printf("%d^%d = %lld\n", base, expoente, resultado);
    }

    return 0;
}
