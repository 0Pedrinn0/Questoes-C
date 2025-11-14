#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL,"");
	
	int n, x = 0;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	for(int i = 0; i <= 10; i++){
		printf("%d X %d = %d\n",n, x++, n*x);
	}
	
	return 0;
}