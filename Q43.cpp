#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL,"");

	float massaInicial,massaFinal,tempo = 0,tempoAnterior;

	printf("Escreva a massa do seu material radioativo: ");
	scanf("%f",&massaInicial);
	
	massaFinal = massaInicial;
	tempoAnterior = tempo;
	
	while(massaFinal > 0.5){
	    tempo+=50;
	    if (tempo != tempoAnterior){
	        massaFinal /= 2;
	    }
	}
    printf("A massa inicial é de %.0f e depois de %.0f segundos a massa final é de %.2f",massaInicial, tempo, massaFinal);
	return 0;
}