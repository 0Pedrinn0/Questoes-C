#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    float altura, maiorA, menorA, somaAlturaMulheres = 0.0;
    char sexo;
    int contadorM = 0, contadorH = 0, i;

    printf("Digite a altura e o sexo (M/F) para %d pessoas:\n", 15);

    for (i = 0; i < 15; i++) {
        printf("Pessoa %d - Altura (m): ", i + 1);
        scanf("%f", &altura);

        printf("Pessoa %d - Sexo (M/F): ", i + 1);
        scanf(" %c", &sexo);

        if (i == 0) {
            maiorA = altura;
            menorA = altura;
        } else {
            if (altura > maiorA) {
                maiorA = altura;
            }
            if (altura < menorA) {
                menorA = altura;
            }
        }

        if (sexo == 'F' || sexo == 'f') {
            somaAlturaMulheres += altura;
            contadorM++;
        } else if (sexo == 'M' || sexo == 'm') {
            contadorH++;
        }
    }

    float mediaAlturaMulheres = 0.0;
    if (contadorM > 0) {
        mediaAlturaMulheres = somaAlturaMulheres / contadorM;
    }

    printf("a) Maior altura do grupo: %.2f m\n", maiorA);
    printf("a) Menor altura do grupo: %.2f m\n", menorA);
    printf("b) Média de altura das mulheres: %.2f m\n", mediaAlturaMulheres);
    printf("c) Número de homens: %d\n", contadorH);

    return 0;
}