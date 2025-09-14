#include <stdio.h>

int main () {
	int a,b,temp;
	
	printf("Digite o valor para A: ");
	scanf("%d", &a);
	printf("Digite o valor para B: ");
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Agr o valor de A eh: %d\n", a);
	printf("Agr o valor de B eh: %d\n", b);
	return 0;
}