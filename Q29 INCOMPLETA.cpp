#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int n1,n2,n3,n4,n5;
	
	printf("Digite 5 valores: ");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
	if (n1 >= 100 || n1 <= 200) {
		printf("Voce digitou um nûmero entre 100 e 200.");
	}
	else {
		printf("Voce digitou um nûmero fora da faixa entre 100 e 200.");
	}
	
	if (n2 >= 100 || n1 <= 200) {
		printf("Voce digitou um nûmero entre 100 e 200");
	}
	else {
		printf("Voce digitou um nûmero fora da faixa entre 100 e 200.");
	}
	
	if (n3 >= 100 || n1 <= 200) {
		printf("Voce digitou um nûmero entre 100 e 200");
	}
	else {
		printf("Voce digitou um nûmero fora da faixa entre 100 e 200.");
	}
	
	if (n4 >= 100 || n1 <= 200) {
		printf("Voce digitou um nûmero entre 100 e 200");
	}
	else {
		printf("Voce digitou um nûmero fora da faixa entre 100 e 200.");
	}
	
	if (n5 >= 100 || n1 <= 200) {
		printf("Voce digitou um nûmero entre 100 e 200");
	}
	else {
		printf("Voce digitou um nûmero fora da faixa entre 100 e 200.");
	}
	
	return 0;
}
