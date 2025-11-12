#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int n, count = 0,count2 = 0;
	
	for(int i = 1; i <= 10; i++){
		printf("Digite 10 valores: ");
		scanf("%d",&n);
		
		if(n >= 10 && n <= 50){
			count++;
		}
		else{
			count2++;
		}
	}
	printf("\n%d numeros estão dentro da sequencia e %d não estão!\n", count, count2);
	
	return 0;
}