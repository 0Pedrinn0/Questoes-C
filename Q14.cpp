#include <stdio.h>

int main() {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if (n > 0) {
		printf("O numero eh positivo!");
	}
	else if (n < 0) {
		printf("O numero eh negativo!");
	}
	else {
		printf("!Zero!");
	}
	
	return 0;
}