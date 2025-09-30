#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int soma;
	
	
	for (int i = 1; i <= 100; i++){
		soma = i + i;
		printf("%d + %d = %d\n", i, i, soma);
		
	}
	return 0;
}
