#include <stdio.h>

int main() {
    int i, a[10];

    for(i = 0; i < 10; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++){
        if((i + 1) % 2 != 0){
            a[i] = a[i] * 5;
        }
    }

    printf("Vetor Modificado:\n");
    for(i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}