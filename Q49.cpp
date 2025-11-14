#include <stdio.h>

int main() {
    int familias, i, filhos, contador = 0, somaF = 0, salarioMil;
    float salario, salarioMaior, somaS = 0, mediaS, mediaF;
    
    printf("Com quantas familias você ira fazer esta pesquisa: ");
    scanf("%d", &familias);
    
    for(i = 1; i <= familias; i++){
        printf("Quantos filhos a %d° familia? ", i);
        scanf("%d", &filhos);
        printf("Qual o salario da %d° familia?  ", i);
        scanf("%f", &salario);
        
        if(salario >= 1000){
            contador++;
        }
        
        somaS += salario;
        somaF += filhos;
        
        if(salarioMaior < salario){
            salarioMaior = salario;
        }
    }
    salarioMil = contador * 100 / familias;
    mediaS = somaS / familias; 
    mediaF = (float)somaF / (float)familias;
    
    printf("A media salarial da população é de R$%.2f\n",mediaS);
    printf("A media de filhos da população é de %.2f\n",mediaF);
    printf("O maior salario é de R$%.2f\n",salarioMaior);
    printf("A quantidade de familias com salario a cima de R$1000,00 é: %d%\n",salarioMil);
    
    return 0;
}