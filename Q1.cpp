#include <stdio.h>

int main() {
    int n1, n2, n;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    n = n1 * n2;
    printf("O produto entre %d e %d e: %d\n", n1, n2, n);
    return 0;
}