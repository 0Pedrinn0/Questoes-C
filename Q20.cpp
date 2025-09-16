#include <stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Digite do primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite do segundo numero: ");
	scanf("%d", &n2);
	printf("Digite do terceiro numero: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3){
		if (n2 > n3) {
			printf("%d %d %d",n3,n2,n1);
		}
	}
	if (n2 > n1 && n2 > n3){
		if (n1 > n3) {
			printf("%d %d %d",n3,n1,n2);
		}
	}
	if (n3 > n1 && n3 > n2){
		if (n1 > n2) {
			printf("%d %d %d",n2,n1,n3);
		}
	}
	
	return 0;
}