#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL,"");
    
    int k, n, espoente, calc;
    
    printf("Digite o valor de K: ");
    scanf("%d",&k);
    
    printf("Digite o valor de N: ");
    scanf("%d",&espoente);

    for(n = 1; n <= espoente; n++){
		calc = pow(k, n);
    }
    printf("K elevado a N é igual a %d",calc);
    return 0;
}