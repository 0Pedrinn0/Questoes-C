#include <stdio.h>

int main() {
	int n1,n2;
	
	printf("Digite do primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite do segundo numero: ");
	scanf("%d", &n2);
	
	if (n1 == n2) {
		printf("!Eles sao iguais!");
	}
	else {
		if (n1 > n2) {
			printf("Eles sao diferentes e %d eh maior que %d!", n1, n2);
		}
		if (n2 > n1) {
			printf("Eles sao diferentes e %d eh maior que %d!", n2, n1);
		}
	}
	
	return 0;
}