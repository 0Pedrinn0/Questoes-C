#include <stdio.h>

int main() {
    int r[4][5];
    int i, j;
    int maior;
    int linha_maior = 0;
    int coluna_maior = 0;

    printf("Preenchendo a matriz R (4x5):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            printf("R[%d][%d]: ", i, j);
            scanf("%d", &r[i][j]);
        }
    }

    maior = r[0][0];

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            if(r[i][j] > maior) {
                maior = r[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("O maior elemento da matriz é: %d\n", maior);
    printf("Ele está na posição: R[%d][%d]\n", linha_maior, coluna_maior);

    return 0;
}