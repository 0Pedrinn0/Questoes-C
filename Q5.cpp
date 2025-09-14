#include <stdio.h>

int main() {
	int n;
	float nConvertido;
	
	printf("Coloque um valor a ser convertido: ");
	scanf("%d",&n);
	
	nConvertido = n / 2.54;
	
	printf("%d centimetros em polegadas fica: %f", n, nConvertido);
	return 0;
}