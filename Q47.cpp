#include <stdio.h>
#include <locale.h>
#include <math.h>


int main () {
	setlocale(LC_ALL,"");
	
	float h, pesoIdeal;
	char sexo;
	
	printf("QuaL seu sexo(M ou F): ");
	scanf("%c",&sexo);
	
	printf("QuaL sua altura(Ex: 1,50): ");
	scanf("%f",&h);
	
	switch(sexo){
	case 'M':
		pesoIdeal = 72.7 * h - 58;
		printf("Seu peso ideal é %f", pesoIdeal);
		break;
	case 'F':
		pesoIdeal = 62.1 * h - 44.7;
		printf("Seu peso ideal é %f", pesoIdeal);
		break;
	default:
		printf("Digite M ou F!");
		break;
	}
	
	return 0;
}