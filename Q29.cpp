#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int n;
	
	for(int i = 0; i <= 5; i++){
		printf("Digite 5 valores: ");
		scanf("%d",&n);
		
		if(n >= 100 && n <= 200){
			printf("Você digitou um número entre 100 e 200\n");
		}
		else{
			printf("Você digitou um número fora da faixa entre 100 e 200\n");
		}
	}
	return 0;
}
