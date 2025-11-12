#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int n = 0, soma = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    for(int i = 0;i <= n;i++){
        soma += i;
    }
    printf("%d", soma);
    return 0;
    
}