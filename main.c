#include <stdio.h>

#define TAMANHO 5

void selecao(int *v);

int main() {
    int numeros[TAMANHO] = {29, 10, 14, 37, 13};

    printf("Array original: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    selecao(numeros);

    printf("Array ordenado: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

void selecao(int *v) {
    int i, j, aux, minimo, pos_minimo;
    for (i = 0; i < TAMANHO - 1; i++) {
        minimo = v[i];
        pos_minimo = i;
        for (j = i + 1; j < TAMANHO; j++) {
            if (minimo > v[j]) {
                minimo = v[j];
                pos_minimo = j;
            }
        }
        if (pos_minimo != i) {
            aux = v[pos_minimo];
            v[pos_minimo] = v[i];
            v[i] = aux;
        }
    }
}
