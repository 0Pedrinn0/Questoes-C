#include <stdio.h>

int main() {
	int x, y, resultado, sobra;
	printf("Coloque o Valor de X: ");
	scanf("%d", &x);
	printf("Digite um Valor para Y: ");
	scanf("%d", &y);
	resultado = x / y;
	sobra = x % y;
	printf("O Resultado da Divisao entre %d e %d eh = %d e sobra = %d", x, y, resultado, sobra);
	return 0;
}