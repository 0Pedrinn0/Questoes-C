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
		printf("Tri�ngulo Equil�tero\n");
	}
	if (n1 == n2 || n1 == n3) {
		printf("Tri�ngulo Is�cele\n");
	}
	if (n1 != n2 && n1 != n3) {
		printf("Tri�ngulo Escaleno\n");
	}
	return 0;
}