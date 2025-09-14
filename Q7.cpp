#include <stdio.h>

int main() {
	int h,r;
	float area,volume;
	
	printf("Digite o valor da altura: ");
	scanf("%d", &h);
	printf("Digite o valor do raio: ");
	scanf("%d", &r);
	
	area = 2 * 3.14 * (h + r);
	volume = 3.14 * (r * r) * h;
	
	printf("A area do cilindro eh = %f\n", area);
	printf("O volume do cilindro eh = %f\n", volume);
	return 0;
}