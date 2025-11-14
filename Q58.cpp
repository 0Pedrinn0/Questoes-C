#include <stdio.h>

int main() {
    int i, v[10];
    int maior = 0;
    int posicao = -1;

    for(i = 0; i < 10; i++){
        printf("Digite o valor para V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++){
        if(i == 0 || v[i] > maior){
            maior = v[i];
            posicao = i;
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("Ele ocupa a posição: %d\n", posicao);

    return 0;
}