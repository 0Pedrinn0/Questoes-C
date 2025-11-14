#include <stdio.h>

int main() {
    int i, a[10], b[10], c[10];

    printf("Preenchendo o vetor A:\n");
    for(i = 0; i < 10; i++){
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Preenchendo o vetor B:\n");
    for(i = 0; i < 10; i++){
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 10; i++){
        c[i] = a[i] + b[i];
    }

    printf("Vetor C (A + B):\n");
    for(i = 0; i < 10; i++){
        printf("C[%d] = %d\n", i, c[i]);
    }

    return 0;
}