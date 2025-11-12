#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    float calculo,s;
    
    for(float i = 1;i <= 10;i++){
        s += 1 / i;
    }
    printf("Resultado: %.2f\n",s);
    return 0;
    
}