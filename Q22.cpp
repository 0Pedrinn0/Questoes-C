#include <stdio.h>

int main () {
	float n1, n2, calculo;
	int escolha, soma, subtracao, divisao, multiplicadao;
	
	soma = 1;
	subtracao = 2;
	divisao = 3;
	multiplicadao = 4;
	
	printf("Digite 1 = soma, 2 = subtracao, 3 = divisao, 4 = multiplicacao ");
	scanf("%d", &escolha);
	
	printf("escolha os dois numeros: ");
	scanf("%f %f", &n1, &n2);
	
	switch (escolha){
		case 1:
			calculo = n1 + n2;
			printf("%.0f + %.0f = %.0f", n1, n2, calculo);
			break;	
		case 2 :
			calculo = n1 - n2;
			printf("%.0f - %.0f = %.0f", n1, n2, calculo);
			break;	
		case 3:
			calculo = n1 / n2;
			printf("%.2f / %.2f = %.2f", n1, n2, calculo);
			break;	
		
		case 4:
			calculo = n1 * n2;
			printf("%.0f * %.0f = %.0f", n1, n2, calculo);
			break;	
		default:
			printf("Digite alguns dos valores mencionado!");
	}
	
	
	return 0;
}