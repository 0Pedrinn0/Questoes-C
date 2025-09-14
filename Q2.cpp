#include <stdio.h>

int main() {
    int n1, sucessor, antecessor;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    sucessor = n1 + 1;
    antecessor = n1 - 1;
    printf("O sucessor de %d e: %d\n", n1, sucessor);
    printf("O antecessor de %d e: %d\n", n1, antecessor);
    return 0;
}