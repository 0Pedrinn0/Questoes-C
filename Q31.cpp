#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	float f, c;
	
	for(f = 50; f <= 65;f++){
		c = (5.0 / 9.0) * (f - 32.0);
		printf("%.2f\n",c);
	}
	return 0;
}