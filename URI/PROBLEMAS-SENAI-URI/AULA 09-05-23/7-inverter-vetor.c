#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
7. FUP que leia um vetor A (Inteiro) e ao final
gere um vetor B resultante da inversão do vetor A.
*/

#define SIZE 10

int main() {

    // Seed para gerar numero aleatorio
    srand(time(NULL));

    int a_normal[SIZE] = {0};

    for (int i = 0; i < SIZE; i = i + 1) {
        // Gerar valor aleatorio entre 1 e 100
        a_normal[i] = 1 + (rand() % 100);
    }


    int b_inverted[SIZE];

    for (int i = 0, j = SIZE - 1; i < SIZE; i++, j--) {
        b_inverted[i] = a_normal[j];
    }


    printf("NORMAL\tINVERTIDO\n");

    for(int i = 0; i < SIZE; i = i + 1) {
        printf("%d\t%d\n", a_normal[i], b_inverted[i]);
    }

    return 0;
}