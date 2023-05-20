#include <stdio.h>

/*
2. Faça um programa em C que peça o valor da idade
até que a idade informada que seja igual a 0.

Imprime a menor, a maior e calcula a média das idades.
*/

int main() {

    int biggest_age, smallest_age;
    int age, age_counter = 0, total_ages_sum = 0;

    printf("\nDigite uma idade: ");
    scanf("%d", &age);

    biggest_age = age;
    smallest_age = age;

    if (age > 0) {
        total_ages_sum += age;
        age_counter++;
    } else {
        printf("\nIdade Invalida, programa encerrado...\n\n");
    }

    while (age > 0) {

        printf("\nDigite uma idade: ");
        scanf("%d", &age);

        // Se a idade Lida for valida
        if (age > 0) {
            
            // Idade atual eh maior que a Maior idade Lida
            if (age > biggest_age) {
                biggest_age = age;
            }

            // Idade atual eh menor que a Menor idade Lida
            if (age < smallest_age) {
                smallest_age = age;
            }

            total_ages_sum += age;
            age_counter = age_counter + 1;
        }

        if (age <= 0) {
            int average_age;

            average_age = total_ages_sum / age_counter;

            printf("\nMedia das idades: %d\n\n", average_age);
        }

    }

    return 0;
}
