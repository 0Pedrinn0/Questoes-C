#include <stdio.h>

int main() {
    int linhas, colunas;
    int i, j;
    int maior_soma = -2147483647;
    int linha_maior = -1;

    printf("Digite o numero de linhas da matriz B: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz B: ");
    scanf("%d", &colunas);

    int b[linhas][colunas];

    printf("Preenchendo a matriz B (%dx%d):\n", linhas, colunas);
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < linhas; i++) {
        int soma_linha = 0;
        for(j = 0; j < colunas; j++) {
            soma_linha += b[i][j];
        }

        if(soma_linha > maior_soma) {
            maior_soma = soma_linha;
            linha_maior = i;
        }
    }

    printf("A linha com a maior soma é a linha %d (indice %d).\n", linha_maior + 1, linha_maior);
    printf("A maior soma é: %d\n", maior_soma);

    return 0;
}