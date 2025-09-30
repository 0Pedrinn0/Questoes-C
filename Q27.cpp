#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int quadrado;
	
	
	for (int i = 15; i <= 30; i++){
		quadrado = i * i;
		printf("o Quadrado de %d é %d\n", i, quadrado);
		
	}
	return 0;
}
