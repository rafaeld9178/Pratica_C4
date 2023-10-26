#include <stdio.h>

int somaNaturais(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somaNaturais(n - 1);
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O valor de n deve ser um numero natural (maior ou igual a 1).\n");
    } else {
        int resultado = somaNaturais(n);
        printf("A soma dos primeiros %d numeros naturais e: %d\n", n, resultado);
    }

    return 0;
}
