#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int mn = 0,n = 0;
	
	for (int i = 1; i <= 20; i++){
		printf("Digite 20 valores: ");
		scanf("%d",&n);
		
		if (mn < n) {
			mn = n;
		}
	}
	printf("O maior valor dentre os valores escritos é: %d",mn);
	
	return 0;
}