#include <stdio.h>

int main() {
    int a[10], soma = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &a[i]);
        soma += a[i];
    }
    printf("A soma de todos os valores do Array é: %d", soma);
    return 0;
}