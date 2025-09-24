#include <stdio.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL,"");
	
	int classeC;
	float consumoQ, a, b, c, valorF, ICMS, valorP;
	
	a = 0.5;
	b = 0.8;
	c = 1.0;
	
	printf("Qual a seu tipo de classe consumidora? Escolha 1 = A | 2 = B | 3 = C:  ");
    scanf("%d", &classeC);
    
 	printf("Qual o consumo em quilowatts/hora: ");
    scanf("%f", &consumoQ);

	
	    
    switch (classeC){
		case 1:
			valorF = consumoQ * a;
			ICMS = valorF * 0.3;
			valorP = ICMS + valorF;
			printf("O valor a ser pago é de R$%.2f",valorP );
		   	break;
		case 2:
			valorF = consumoQ * b;
			ICMS = valorF * 0.3;
			valorP = ICMS + valorF;
			printf("O valor a ser pago é de R$%.2f",valorP );
		   	break;
		case 3:
			valorF = consumoQ * c;
			ICMS = valorF * 0.3;
			valorP = ICMS + valorF;
			printf("O valor a ser pago é de R$%.2f",valorP );
		   	break;
		default:
		   	printf("Digite alguns dos valores mencionados!");
		   	break;
	}
	return 0;
}