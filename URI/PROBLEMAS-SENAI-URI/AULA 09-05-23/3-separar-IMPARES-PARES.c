#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

/*
3. Faça um programa em C que leia 20 números inteiros e armazene-os num vetor,
armazene os números pares no vetor PAR e os números IMPARES no vetor impar
e imprima os tres vetores.
*/


#define SIZE 20
#define FLAG_VALUE -999

int main() {

    // Gerar numeros aleatorios com uma Seed
    srand(time(NULL));

    int number_values[SIZE] = {0};

    // Ler valores aleatorios de 1 ate 100
    for (int i = 0; i < SIZE; i = i + 1) {
        number_values[i] = 1 + (rand() % 100); 
    }

    /*  Caso queira valores manuais
    
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &values[i]);
    }*/

    printf("Valores Lidos\n\n");
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("%do valor: %d\n", i, number_values[i]);
    }


    int even_values[SIZE] = {0};
    int odd_values[SIZE] = {0};

    // Colocar o valor de FLAG em todas as posicoes do Vetor
    for (int i = 0; i < SIZE; i = i + 1) {
        even_values[i] = FLAG_VALUE;
        odd_values[i] = FLAG_VALUE;
    }

    for (int i = 0, even_index = 0, odd_index = 0; i < SIZE; i = i + 1) {
        if (number_values[i] % 2 == 0) {
            even_values[even_index] = number_values[i];
            even_index = even_index + 1;
        }  else {
            odd_values[odd_index] = number_values[i];
            odd_index = odd_index + 1;
        }
    }


    printf("\n\n");
    printf("Lista de Numeros\tLista de Pares\tLista de Impares\n\n");
    
    for (int i = 0; i < SIZE; i = i + 1) {
        printf("\t%d\t\t\t", number_values[i]);
    
        if (even_values[i] != FLAG_VALUE) {
            printf("%d\t\t", even_values[i]);
        } else {
            printf("\t\t");
        }

        if (odd_values[i] != FLAG_VALUE) {
            printf("%d\t\t", odd_values[i]);
        } else {
            printf("\t\t");
        }

        printf("\n");
    }
    printf("\n\n");

    return 0;
}