#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    
    int f = 1,anteriorF1 = 1,anteriorF2 = 1;
    
    printf("%d\n",anteriorF1);
    printf("%d\n",anteriorF2);
    for (int i = 1; i <= 10; i++){
        
        f = anteriorF1 + anteriorF2;
        anteriorF2 = anteriorF1;
        anteriorF1 = f;
        
        printf("%d\n", f);
    }

    return 0;
    
}