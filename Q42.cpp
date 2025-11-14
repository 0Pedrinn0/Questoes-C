#include <stdio.h>
#include <locale.h>
#include <math.h>


int main () {
	setlocale(LC_ALL,"");
	
	int x, a;
	float s = 0, conta;

	printf("Sim?");
	scanf("%d", &x);
	
	printf("Não!");
	scanf("%d",&a);
	
	if (a > 0 && a < 20){
		printf("Digite um numero maior que 20 ou menor que 0\n");
	}
	
	for(int i = 0;i <= 20; i++)	{
		conta = i + 1 / (a - i) * 20 - i / pow(x, i + 1);
		s += conta;
	}
	
	printf("%.2f", s);
	return 0;
}