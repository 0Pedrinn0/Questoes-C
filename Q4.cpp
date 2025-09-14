#include <stdio.h>

int main() {
	int n1,n2,soma,produto,quociente;
	
	printf("Digite o Primeiro Valor: ");
	scanf("%d", &n1);
	printf("Digite o Segundo Valor: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	produto = n1 * n2;
	quociente = n1 / n2;
	
	printf("Soma: %d\n", soma);
	printf("Produto: %d\n", produto);
	printf("Quociente: %d\n", quociente);
	return 0;
}