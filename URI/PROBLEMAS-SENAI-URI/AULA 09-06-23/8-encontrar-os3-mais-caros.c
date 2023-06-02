#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

/*
8. Uma empresa vende 10 artigos.
Cada artigo ‚ identificado por um código e possui um preço.

Usando vetor, faca um programa que

armazene todos os códigos e preços
e imprima os três mais caros.
*/

#define TOTAL_ARTICLES 10

int main() {
    srand(time(NULL));

    // Codigo - Preco
    float articles[TOTAL_ARTICLES][2];

    int random_fake_code, is_duplicated;

    // Gerar codigos para os Artigos
    for (int i = 0; i < TOTAL_ARTICLES; i = i + 1) {
        
        do {
            // Gerar codigo Fake, apenas para testes rapidos
            random_fake_code = (rand() % 100 ) * (1 + (rand() % 10)) + (1001 + (rand() % 1000));
            
            is_duplicated = false;

            for (int j = 0; j < TOTAL_ARTICLES; j = j + 1) {
                if (articles[j][0] == random_fake_code) {
                    is_duplicated = true;
                }
            }

        } while (is_duplicated == true);

        articles[i][0] = random_fake_code;
    }


    // Gerar valores para os Artigos
    for (int i = 0; i < TOTAL_ARTICLES; i = i + 1) {
        // Gerar Valores entre ate R$ 100,00 
        articles[i][1] = (101 + (rand() % 10000)) + (rand() % 10);
    }


    // Buscar os 3 valores mais caros
    float aux;

    // Para cada elemento de Articles verifique se eh maior que algum elemento de Three_highest_values
    for (int i = 0; i < TOTAL_ARTICLES - 1; i = i + 1) {
        for (int j = 0; j < TOTAL_ARTICLES - i - 1; j = j + 1) {
            if (articles[j][1] < articles[j + 1][1]) {
                aux = articles[j][1];
                articles[j][1] = articles[j + 1][1];
                articles[j + 1][1] = aux; 
            }
        }        
    }

    printf("\n\nArtigos\n--------------------\nCODIGO\t\tVALOR\n--------------------\n");

    for (int i = 0; i < TOTAL_ARTICLES; i = i + 1) {
        printf("%d\t\t%.2f\n", (int)articles[i][0], articles[i][1] / 100);
    }

    printf("\n\nPegar os 3 mais Caros\n--------------------\nCODIGO\t\tVALOR\n--------------------\n");
    for (int i = 0; i < 3; i = i + 1) {
        printf("%d\t\t%.2f\n", (int)articles[i][0], articles[i][1] / 100);
    }

    printf("\n\n");

    return 0;
}