#include<stdio.h>
#include <time.h>
#include <stdlib.h>

/*
5. FUP que leia um vetor e um número inteiro.
Após multiplique todos os elementos do vetor
pelo número informado.
Imprima os resultados.
*/

#define SIZE 10

int main() {
    
    srand(time(NULL));
    
    int drawn_numbers[SIZE];
    
    for (int i = 0; i < SIZE; i = i + 1) {
        drawn_numbers[i] = 1 + (rand() % 100);
    }
    
    int drawn_number = 1 + (rand() % 10); 
    
    int product_vector[SIZE];
    
    for (int i = 0; i < SIZE; i = i + 1) {
        product_vector[i] = drawn_numbers[i] * drawn_number;
    }
    
    printf("\n\nVetor dos Numeros Sorteados (1 ate 100)\n");
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%d ", drawn_numbers[i]);
    }
    
    printf("\n\nVetor do Produto dos Numeros Sorteados com %d\n", drawn_number);
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%d ", product_vector[i]);
    }
    
    
    return 0;
}
