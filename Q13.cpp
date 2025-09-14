#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int precoAutomovel,precoImposto,precoFinal;
	
	printf("Digite o valor do automóvel: ");	
	scanf("%d",&precoAutomovel);
	
	precoImposto = (precoAutomovel * 0.45) + precoAutomovel;
	precoFinal = (precoImposto * 0.28) + precoImposto;
	
	printf("O valor final do automóvel é: %d", precoFinal);
	return 0;
}