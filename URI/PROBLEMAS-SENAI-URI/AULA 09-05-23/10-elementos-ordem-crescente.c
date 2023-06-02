#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
10. Faça um programa que leia um vetor de 20 elementos
e coloque-os em ordem crescente
*/

#define SIZE 20

int main() {

    srand(time(NULL));

    int v[SIZE] = {0};

    for (int i = 0; i < SIZE; i = i + 1) {
        v[i] = 1 + rand() % 100;
    }

    printf("\n\nVetor Normal\n\n");
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%d ", v[i]);

        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }

    for (int i = 0; i < SIZE; i = i + 1) {
        for (int j = 0; j < SIZE - i - 1; j = j + 1) {
            if (v[j] < v[j + 1]) {
                int aux;

                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("\n\nVetor Ordenado\n\n");
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%d ", v[i]);

        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }

    printf("\n\n");

    return 0;
}