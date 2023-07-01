/* PROBLEMA */
// o valor da maior altura; o valor da menor altura; a média das alturas; quantas
// pessoas têm altura inferior à média das alturas.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TOTAL_DE_PESSOAS 1000

// Onde Zero sendo o primeiro elemento do Array
#define PRIMEIRA_ALTURA 0

#define ALTURA_MINIMA 160 // 1.60

// Função Rand para gerar valores de 0-40 deve-se colocar 41,
// Pois o 41 não é gerado
#define LIMITE_ENTRE_ALTURA_MINIMA 41

// Retorna uma altura entre um intervalo
// de 1.60m até 2.00m 
float gerar_altura_aleatoria(void) {
    return ALTURA_MINIMA + (rand() % LIMITE_ENTRE_ALTURA_MINIMA);
}

int main() {

    // Função para definir novo conjunto de números aleatórios
    srand(time(NULL));

    float alturas_pessoas[TOTAL_DE_PESSOAS];
    float somatorio_das_alturas = 0;

    // Primeira altura sendo a _Maior_ e a _Menor_
    alturas_pessoas[0] = gerar_altura_aleatoria();

    float maior_altura = alturas_pessoas[PRIMEIRA_ALTURA];
    float menor_altura = alturas_pessoas[PRIMEIRA_ALTURA];

    somatorio_das_alturas += alturas_pessoas[0];

    printf("%.2f\n", alturas_pessoas[0]);

    // Gerar alturas restantes e Verificar cada uma delas
    for (int pessoa = 1; pessoa < TOTAL_DE_PESSOAS; pessoa = pessoa + 1) {
        alturas_pessoas[pessoa] = gerar_altura_aleatoria();

        if (alturas_pessoas[pessoa] > maior_altura) {
            maior_altura = alturas_pessoas[pessoa];
        }
    
        if (alturas_pessoas[pessoa] < menor_altura) {
            menor_altura = alturas_pessoas[pessoa];
        }

        somatorio_das_alturas += alturas_pessoas[pessoa];
    
        printf("%.2f\n", alturas_pessoas[pessoa]);
    }



    float media_das_alturas;

    media_das_alturas = somatorio_das_alturas / TOTAL_DE_PESSOAS;

    
    int quantidade_pessoas_abaixo_da_media = 0;

    for (int pessoa = 0; pessoa < TOTAL_DE_PESSOAS; pessoa = pessoa + 1) {
        if (alturas_pessoas[pessoa] < media_das_alturas) {
            quantidade_pessoas_abaixo_da_media += 1;
        }
    }


    printf("\n\nForam lidas %d alturas para a pesquisa\n", TOTAL_DE_PESSOAS);
    printf("A Menor (<) altura lida foi: %.2f\n", menor_altura);
    printf("A Maior (>) altura lida foi: %.2f\n", maior_altura);
    printf("A Soma de todas as alturas foi: %.2f\n", somatorio_das_alturas);
    printf("A media das alturas lidas foi: %.2f\n", media_das_alturas);
    printf("Sendo %d pessoas com altura menor que a Media\n\n\n", quantidade_pessoas_abaixo_da_media);


    return 0;
}