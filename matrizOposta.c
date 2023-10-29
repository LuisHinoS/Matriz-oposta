#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &colunas);

    if (linhas <= 0 || colunas <= 0) {
        printf("Número de linhas e colunas inválido.\n");
        return 1;
    }

    int matriz1[100][100], matriz2[100][100];

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    int saoOpostas = 1;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz1[i][j] + matriz2[i][j] != 0) {
                saoOpostas = 0;
                break;
            }
        }
        if (saoOpostas == 0) {
            break;
        }
    }

    if (saoOpostas) {
        printf("As matrizes são opostas.\n");
    } else {
        printf("As matrizes não são opostas.\n");
    }

    return 0;
}
