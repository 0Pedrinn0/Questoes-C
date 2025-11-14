#include <stdio.h>

int main() {
    int m;
    int i, j;
    int soma = 0;

    printf("Digite a ordem (tamanho M) da matriz quadrada: ");
    scanf("%d", &m);

    int a[m][m];
    int d[m];

    printf("Preenchendo a matriz A (%dx%d):\n", m, m);
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        soma += a[i][i];
        d[i] = a[i][i];
    }

    printf("\nA soma dos elementos da diagonal principal é: %d\n", soma);

    printf("\nVetor D (Diagonal Principal):\n");
    for(i = 0; i < m; i++) {
        printf("D[%d] = %d\n", i, d[i]);
    }

    return 0;
}