#include <stdio.h>

int main() {
    int m;
    int i, j;

    printf("Digite a ordem (tamanho M) da matriz quadrada A: ");
    scanf("%d", &m);

    int a[m][m];
    int t[m][m];

    printf("Preenchendo a matriz A (%dx%d):\n", m, m);
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            t[i][j] = a[j][i];
        }
    }

    printf("Matriz A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    printf("Matriz T (Transposta de A):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("%4d", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}