#include <stdio.h>
#include <math.h>

/*
2. Faça um programa em C que
leia um vetor A com 4 elementos,
calcule e mostre a soma dos quadrados dos elementos do vetor.
*/

#define LENGTH 4

int main() {

    double vetor[LENGTH];

    for (int i = 0; i < LENGTH; i = i + 1) {
        printf("\n\nDigite o valor do %do elemento: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

    printf("\n\n\n\n");

    double square_sum = 0;

    for (int i = 0; i < LENGTH; i = i + 1) {
        square_sum += pow(vetor[i], 2);
    }

    printf("A soma dos quadrados dos elementos do vetor: %.2f", square_sum);

    return 0;
}