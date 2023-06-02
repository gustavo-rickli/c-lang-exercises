#include<stdio.h>
#include <time.h>
#include <stdlib.h>

/*
4. Faça um programa (FUP) em C que

leia dois vetores com 3 elementos cada.

Gere um terceiro vetor de 6 elementos,

cujos valores deverão ser compostos pelos elementos
intercalados dos dois outros vetores.
*/

#define SIZE 3
#define INTERLEAVED_SIZE 6

int main()
{
    srand(time(NULL));
    
    
    int first_vector[SIZE] = {0};
    
    for (int i = 0; i < SIZE; i = i + 1) {
        first_vector[i] = 1 + (rand() % 100);
    }
    
    
    int second_vector[SIZE] = {0};
    
    for (int i = 0; i < SIZE; i = i + 1) {
        second_vector[i] = 1 + (rand() % 100);
    }
    
    
    int interleaved_vector[INTERLEAVED_SIZE] = {0};
    
    for (int i = 0, first = 0, second = 1; i < INTERLEAVED_SIZE; i = i + 1) {
        interleaved_vector[first] = first_vector[i];
        interleaved_vector[second] = second_vector[i];
        
        first = first + 2;
        second = second + 2;
    }
    
    
    printf("Lista de Vetores\n\nPrimeiro:  ");
    
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%d ", first_vector[i]);
    }
    
    
    printf("\n\nSegundo:  ");
    
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%d ", second_vector[i]);
    }
    
    
    printf("\n\nVetor Intercalado:  ");
    
    for (int i = 0; i < INTERLEAVED_SIZE; i = i + 1) {
        printf("%d ", interleaved_vector[i]);
    }
    
    printf("\n\n");
    
    return 0;
}
