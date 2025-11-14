#include <stdio.h>

int main() {
    int i, j = 0, a[10], b[10], c[20];

    printf("Preenchendo o vetor A (10 elementos):\n");
    for(i = 0; i < 10; i++){
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Preenchendo o vetor B (10 elementos):\n");
    for(i = 0; i < 10; i++){
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 10; i++){
        c[j] = a[i];
        j++;
        c[j] = b[i];
        j++;
    }

    printf("Vetor C (Intercalado):\n");
    for(i = 0; i < 20; i++){
        printf("C[%d] = %d\n", i, c[i]);
    }

    return 0;
}