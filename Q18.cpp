#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int macas;
	float preco;
	
	printf("Quantas ma�as voc� vai querer? ");
	scanf("%d", &macas);
	
	if (macas >= 12){
		preco = 0.25;
		preco = preco * macas;
		
		printf("%d ma�as s�o R$%.2f", macas, preco);
	}
	else {
		preco = 0.30;
		preco = preco * macas;
		
		printf("%d ma�as s�o R$%.2f", macas, preco); 	
	}
	return 0;
}