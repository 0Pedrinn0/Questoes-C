#include <stdio.h>

int main() {
	int r;
	float resultado;
	
	printf("Digite o valor do raio: ");
	scanf("%d", &r);
	
	resultado = 3.14 * (r * r);
	
	printf("A area do circulo cujo o raio eh igual a %d eh = %f", r, resultado);
	
	return 0;
}