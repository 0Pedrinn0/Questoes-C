#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int n1, n2, n3;
	
	printf("Digite do primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite do segundo numero: ");
	scanf("%d", &n2);
	printf("Digite do terceiro numero: ");
	scanf("%d", &n3);
	
	if (n1 == n2 && n1 == n3) {
		printf("Triângulo Equilátero\n");
	}
	if (n1 == n2 || n1 == n3) {
		printf("Triângulo Isócele\n");
	}
	if (n1 != n2 && n1 != n3) {
		printf("Triângulo Escaleno\n");
	}
	return 0;
}