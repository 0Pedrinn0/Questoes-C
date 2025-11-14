#include <stdio.h>

int main() {
    int i, a[10], soma = 0;
    float media = 0;
    
    for(i = 0; i < 10; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &a[i]);
        soma += a[i];
    }
    media = soma / i;
    printf("A media de todos os valores do Array é: %.2f", media);
    return 0;
}