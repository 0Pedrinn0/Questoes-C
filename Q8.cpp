#include <stdio.h>

int main() {
	int salarioF;
	float salarioT;a
	
	salarioF = 1518;
	
	printf("De quanto foi sua venda: \n");
	scanf("%f", &salarioT);
	
	salarioT = (salarioT * 0.15) + salarioF;
	
	printf("Seu Salario Fixo eh de: %d\n",salarioF);
	printf("Seu salario total eh de: %f\n",salarioT);
	
	return 0;
}