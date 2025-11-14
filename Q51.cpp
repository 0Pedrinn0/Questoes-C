#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");
    char sexo, resposta;
    int i, simTotal = 0, naoTotal = 0, totalF = 0, simF = 0, totalM = 0, naoM = 0;

    printf("Digite o sexo (M/F) e a resposta (S/N) para %d pessoas:\n", 20);

    for (i = 0; i < 5; i++) {
        printf("Pessoa %d - Sexo (M/F): ", i + 1);
        scanf(" %c", &sexo);

        printf("Pessoa %d - Resposta (S/N): ", i + 1);
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's') {
            simTotal++;
            if (sexo == 'F' || sexo == 'f') {
                simF++;
            }
        } else if (resposta == 'N' || resposta == 'n') {
            naoTotal++;
            if (sexo == 'M' || sexo == 'm') {
                naoM++;
            }
        }

        if (sexo == 'F' || sexo == 'f') {
            totalF++;
        } else if (sexo == 'M' || sexo == 'm') {
            totalM++;
        }
    }

    float percSimF = 0.0;
    if (totalF > 0) {
        percSimF = ((float)simF / totalF) * 100.0;
    }

    float percNaoM = 0.0;
    if (totalM > 0) {
        percNaoM = ((float)naoM / totalM) * 100.0;
    }

    printf("a) Número de pessoas que responderam SIM: %d\n", simTotal);
    printf("b) Número de pessoas que responderam NAO: %d\n", naoTotal);
    printf("c) Percentagem de pessoas do sexo feminino que responderam SIM: %.2f%%\n", percSimF);
    printf("d) Percentagem de pessoas do sexo masculino que responderam NAO: %.2f%%\n", percNaoM);

    return 0;
}