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
        printf("n�o h� solu��o ao real, pois n�o ao existe raiz quadrada de n�mero negativo.");
    }
    else if (d = 0) {
        printf("a equa��o possui uma �nica raiz real, pois as duas s�o iguais.");
    }
   else{
        printf("A equa��o possui duas ra�zes reais e distintas.");
    }
    
    return 0;
}