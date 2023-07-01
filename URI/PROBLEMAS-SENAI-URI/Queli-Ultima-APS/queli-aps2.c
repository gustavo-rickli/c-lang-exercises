// Programa para Determinar se uma Ano é Bissexto ou Não
#include <stdio.h>

void year_is_Leap(int year) {
    if (year % 400 == 0) {
        printf("\n\n\tO Ano %d eh Bissexto!!\n\n", year);
    } else {
        if (year % 4 == 0 && year % 100 != 0) {
            printf("\n\n\tO Ano %d eh Bissexto!!\n\n", year);
        } else {
            printf("\n\n\tO Ano %d Nao eh Bissexto\n\n", year);          
        }
    }
}

int main() {

    year_is_Leap(2017);

    year_is_Leap(2016);

    year_is_Leap(2012);

    year_is_Leap(2023);

    year_is_Leap(2021);


    return 0;
}