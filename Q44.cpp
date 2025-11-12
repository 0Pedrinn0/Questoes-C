#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL,"");
	
	int n, soma = 0, contador = 0;
	float media = 0;
	
	do {
		printf("Digite os valores para ser feito a media: ");
		scanf("%d", &n);
		if (n >= 0){
			soma += n;
			contador++;
		}
	}while(n >= 0);
	
	media = soma / contador;
	
	printf("Foram digitados %d numeros inteiros!\n", contador);
	printf("A soma de todos os numeros inteiros é %d\n", soma);
	printf("A media dos numeros digitados é %.2f\n", media);
	
	return 0;
}