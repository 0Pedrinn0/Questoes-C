#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int a, b, c, d, xMa, xMe;
    
    printf("Digite um valor para a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    d = (b * b) - 4 * a * c;
    
    xMa = (-b + sqrt(d)) / (2 * a);
    
    xMe = (-b - sqrt(d)) / (2 * a);
    
    if (d < 0) {
        printf("não há solução ao real, pois não ao existe raiz quadrada de número negativo.");
    }
    else if (d = 0) {
        printf("a equação possui uma única raiz real, pois as duas são iguais.");
    }
   else{
        printf("A equação possui duas raízes reais e distintas.");
    }
    
    return 0;
}