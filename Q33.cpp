#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int s = 0,j = 0;
	float m;
	
	for (int i = 13; i <= 73; i++){
		if(i % 2 == 0){
			j++;
			s += i;
			m = s / j;
			
		}
	}
	printf("A m�dia aritm�tica dos n�meros pares entre 13 e 73 � %.2f\n", m);
	return 0;
}