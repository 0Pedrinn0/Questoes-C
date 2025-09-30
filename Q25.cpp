#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	for (int i = 14;i <= 30; i += 2){
		printf("%d\n",i);
	}
	return 0;
}
