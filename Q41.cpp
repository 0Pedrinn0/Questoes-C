#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"");
    
    int k, n, espoente;
    
    printf("Digite o valor de K: ");
    scanf("%d",&k);
    
    printf("Digite o valor de N: ");
    scanf("%d",&espoente);
    
    for(n = 1; n <= espoente; n++){
        int calc = pow(k, n);
        printf("%d elevado a %d = %d\n", k, n, calc);
    }
    return 0;
}