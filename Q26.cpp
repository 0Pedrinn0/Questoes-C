#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int count = 0;
	
	
	for (int i = 7; i <= 70; i = i + 7){
		count++;
		printf("7 X %d = %d\n",count ,i);
		
	}
	return 0;
}
