#include <stdio.h>

int main()
{
    int CP, itens;
    float PE, soma = 0, desconto, juros;
    
    printf("Quantos itens você comprou: ");
    scanf("%d", &itens);
    
    for(int i = 1; i <= itens; i++){
        printf("Digite o valor do %d° item: ", i);
        scanf("%f", &PE);
        soma += PE;
    }
    
    printf("Qual a forma de pagamento\nA vista no dinheiro: 1\nA vista no cartão: 2\nEm 2 vezes sem juros: 3\nEm 3 vezes com juros: 4\n ");
    scanf("%d",&CP);
    
    switch(CP){
        case 1:
            desconto = soma * 0.9;
            printf("O total das suas compras foi R$%.2f e com desconto ficou R$%.2f", soma, desconto);
            break;
        case 2:
            desconto = soma * 0.95;
            printf("O total das suas compras foi R$%.2f e com desconto ficou R$%.2f", soma, desconto);
            break;
        case 3:
            printf("O total das suas compras foi R$%.2f", soma);
            break;
        case 4:
            juros = soma * 1.1;
            printf("O total das suas compras foi R$%.2f", juros);
            break;
        default:
            printf("Escolha um dos numeros mostrados!");
            break;
    }

    return 0;
}