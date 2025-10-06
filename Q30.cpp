#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int idade, maiores = 0;
	
	for(int i = 0; i <= 10; i++){
		printf("Digite a idade das pessoas: ");
		scanf("%d",&idade);
		if (idade >= 18){
			maiores = maiores + 1;
		}
	}
	printf("\n%d São maiores de idade",maiores);
	
	return 0;
}