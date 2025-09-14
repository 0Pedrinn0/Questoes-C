#include <stdio.h>

int main() {
	int valorCompra,troco,cedula1,cedula2,cedula5,cedula10,cedula20,cedula50,cedula100;
	
	printf("Digite o valor da compra: ");
	scanf("%d",&valorCompra);
		
	troco = valorCompra;
	cedula100 = troco / 100;
	troco = troco % 100;
	cedula50 = troco / 50;
	troco = troco % 50;
	cedula20 = troco / 20;
	troco = troco % 20;
	cedula10 = troco / 10;
	troco = troco % 10;
	cedula5 = troco / 5;
	troco = troco % 5;
	cedula2 = troco / 2;
	troco = troco % 2;
	cedula1 = troco;
	
	printf("Troco a ser devolvido:\n");
	if (cedula100)printf("100 reais: %d\n", cedula100);
	if (cedula50)printf("50 reais: %d\n", cedula50);
	if (cedula20)printf("20 reais: %d\n", cedula20);
	if (cedula10)printf("10 reais: %d\n", cedula10);
	if (cedula5)printf("5 reais: %d\n", cedula5);
	if (cedula2)printf("2 reais: %d\n", cedula2);
	if (cedula1)printf("1 real: %d\n", cedula1);

	return 0;
}