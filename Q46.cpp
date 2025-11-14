#include <stdio.h>

int main() {
    int n, i;
    long long f = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao e possivel calcular o fatorial de um numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            f *= i;
        }
        printf("%d! = %lld\n", n, f);
    }

    return 0;
}