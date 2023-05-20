#include <stdio.h>

/*

Faça um programa em C que leia um conjunto de dados contendo altura e sexo
(masculino/feminino) de 3 pessoas.
Fazer um programa que calcule e escreva:
A maior e menor altura do grupo;
A média da altura das mulheres;
O número de homens.

*/


int main() {

    float person_height;
    char person_sex;

    float biggest_height = 0;
    float smallest_height = 200;

    float sum_heights_womans;
    int counter_males = 0, counter_females = 0;

    for (int person_counter = 1; person_counter <= 3; person_counter++) {
        printf("Digite a Altura da %da pessoa: ", person_counter);
        scanf("%f", &person_height);
        
        getchar();

        printf("Digite o Sexo da %da pessoa\n(H/h [Homem] | M/m [Mulher]):  ", person_counter);
        scanf("%c", &person_sex);

        if (person_height > biggest_height) {
            biggest_height = person_height;
        }

        if (person_height < smallest_height) {
            smallest_height = person_height;
        }

        if (person_sex == 'm' || person_sex == 'M') {
            sum_heights_womans += person_height;
            counter_females = counter_females + 1;
        } else {
            counter_males = counter_males + 1;
        }
        
        printf("\n\n");
    }

    // float average_height_of_women;

    /*
    A maior e menor altura do grupo;
    A média da altura das mulheres;
    O número de homens.
    */
    printf("\nA maior altura lida: %.2f\n", biggest_height);
    printf("A menor altura lida: %.2f\n", smallest_height);
    
    if (counter_females > 0) {
        printf("A media da altura das mulheres: %.2f\n", sum_heights_womans / counter_females);
    }

    printf("O numero de homens foi: %d", counter_males);


    return 0;
}
