#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
6. As notas da disciplina de Design de Software aplicado
à Engenharia foram anotadas em uma folha.

Faça um programa que leia esses dados, armazene-os
e conte quantos alunos 
possuem nota superior à média da turma.
*/

#define TOTAL_STUDENTS 30

// 100 para mover Duas casas decimais
#define DECIMAL_PLACES 100
#define HIGHEST_GRADE_POSSIBLE 1000
#define DISPLACEMENT_VALUE 1

int main() {
    
    srand(time(NULL));
    
    float student_grades[TOTAL_STUDENTS] = {0};
    float sum_of_grades = 0;
    
    for (int i = 0; i < TOTAL_STUDENTS; i = i = 1) {
        student_grades[i] = (DISPLACEMENT_VALUE + (rand() % HIGHEST_GRADE_POSSIBLE)) / DECIMAL_PLACES;
        sum_of_grades += student_grades[i]; 
    }
    
    float grade_average;
    
    grade_average = sum_of_grades / TOTAL_STUDENTS;
    
    
    float highest_grade_student_counter = 0;
    
    for (int i = 0; i < TOTAL_STUDENTS; i = i + 1) {
        if (student_grades[i] > grade_average) {
            highest_grade_student_counter++;
        }
    }
    
    
    for ()
    
    return 0;
}
