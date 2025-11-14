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
        j = m - 1 - i;
        soma += a[i][j];
        d[i] = a[i][j];
    }

    printf("A soma dos elementos da diagonal secundaria é: %d\n", soma);

    printf("Vetor D (Diagonal Secundaria):\n");
    for(i = 0; i < m; i++) {
        printf("D[%d] = %d\n", i, d[i]);
    }

    return 0;
}