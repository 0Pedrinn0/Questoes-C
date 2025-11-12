#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    float s = 0,baixo = 0;
    
    for(float i = 1;i <= 99;i += 2){
        baixo++;
        s += i / baixo;
    }
    printf("%.2f",s);
    return 0;
}