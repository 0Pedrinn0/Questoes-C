#include <stdio.h>

int main() {

    int i, a[10], soma = 0, aMaior = 0;
    float media = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &a[i]);
        soma += a[i];
    }
    
    media = soma / 10;
    
    for(i = 0; i < 10; i++){
        if(a[i] > media){
            aMaior++;
        }
    }
    printf("O número de elementos acima da média é: %d\n", aMaior);
    
    return 0;
}