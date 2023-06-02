#include <stdio.h>

/*
1. Faça um programa em C que mostre que peca a idade e a altura de 3 pessoas,
armazene cada informação no seu respectivo vetor.
Imprima a idade e a altura na ordem inversa a ordem lida.
*/

#define FALSE 0
#define TRUE 1

int main() {

    // Controlar se a ENTRADA do usuario eh valida
    int valid_input = FALSE;

    // Altura - Idade
    float people_datas[3][2];

    for (int person = 0; person < 3; person = person + 1) {
        
        do {
            valid_input = TRUE;

            printf("Digite a idade da %da pessoa: ", person + 1);
            scanf("%f", &people_datas[person][0]);
        
            // validar se foi digitado um valor decimal
            if (people_datas[person][0] != (float)((int)people_datas[person][0])) {
                printf("Voce digitou um valor incorreto.\n");
                printf("Esperava ser uma idade como %d, porem foi digitado com valor decimal %.2f.\n\n", (int)people_datas[person][0], people_datas[person][0]);
            
                valid_input = FALSE;
            }

            // validar se foi digitado uma idade < 18
            if (people_datas[person][0] < 18) {
                printf("Voce digitou um valor incorreto.\n");
                printf("Digite um valor maior que 18.\n\n");

                valid_input = FALSE;
            }

        } while (valid_input == FALSE);

        do {
            valid_input = TRUE;

            printf("Digite a altura da %da pessoa: [Altura Min. 1.00m, Alt. Max. 2.50m]  ", person + 1);
            scanf("%f", &people_datas[person][1]);

            // Verificar se a altura eh menor ou igual a 1.00m OU maior que 2.50m
            if (people_datas[person][1] <= 1.00 || people_datas[person][1] >= 2.50) {
                printf("Voce digitou um valor incorreto.\n");
                printf("Digite um valor %s\n\n", people_datas[person][1] <= 1.00 ? "maior que 1.00" : "menor que 2.50");

                valid_input = FALSE;
            }

        } while (valid_input == FALSE);

        printf("\n\n\n");
    }


    char counter_person[3][10] = {{"Primeira"}, {"Segunda"}, {"Terceira"}};

    // Imprimir em ordem inversa os dados de cada pesso
    for (int person = 2; person >= 0; person = person - 1) {
        printf("Dados da %s pessoa\nIdade: %d\tAltura: %.2f\n\n", counter_person[person], (int)people_datas[person][0], (float)people_datas[person][1]);
    }

    return 0;
}