#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
9. dada uma lista contendo datas de nascimentos (somente o ano) de diversas pessoas.
Faça um programa para determinar a idade de cada pessoa e a idade média do grupo.
*/

#define AMOUNT_PEOPLES 10

#define MINIMUM_YEAR 1970
#define MINIMUN_AGE 10
#define INTERVAL 31

int main() {

    srand(time(NULL));

    int date_of_birth[AMOUNT_PEOPLES];

    for (int i = 0; i < AMOUNT_PEOPLES; i = i + 1) {
        // Gerar valores aleatorio entre 1980 ate 2010
        date_of_birth[i] = (MINIMUM_YEAR + MINIMUN_AGE) + (rand() % INTERVAL);
    }

    int sum_ages = 0;

    for (int i = 0; i < AMOUNT_PEOPLES; i = i + 1) {
        sum_ages += date_of_birth[i] - MINIMUM_YEAR;
    }

    int average_age = sum_ages / AMOUNT_PEOPLES;



    printf("\n----------------------\n  Idade das Pessoas\n----------------------\n");
    for (int i = 0; i < AMOUNT_PEOPLES; i = i + 1) {
        printf(" %da pessoa: %d anos\n", i + 1, date_of_birth[i] - MINIMUM_YEAR);
    }

    printf("----------------------\n Media das Idades: %d anos\n----------------------\n\n", average_age);

    return 0;
}