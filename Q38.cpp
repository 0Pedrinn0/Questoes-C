#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    
    float x, s = 0;
    
    printf("Digite: ");
    scanf("%f",&x);
    
    if (x >= 20 || x <= 0){
            for(int i = 1; i <= 20; i++){
            s += 1 / (x - i);
        }
        printf("%.2f", s);
    }
    else{
        printf("Digite um numero maior que 20 ou menor que 0.");
    }
    
    return 0;
    
}