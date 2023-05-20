#include <stdio.h>
#include <math.h>

/*

Faca um programa em C que mostre um menu de opções para o usuário.
opção
1 - Cálculo da área do quadrado; A = L * L
 2 - Cálculo da área do retângulo; A = L * B
 3- Cálculo da área do círculo; A = Pi * R^2
 4- Cálculo da área do trapézio A=(a+b)/2 x h
 5 - Cálculo da área do triangulo; A = (B * h) / 2

Após isto, solicite as variáveis necessárias para cálculo da área de cada uma destas formas
geométricas e imprima o valor da área da forma escolhida.


*/

// printf("");

int main() {

    int user_option;

    printf("Digite sua opcao: ");
    scanf("%d", &user_option);


    float geometric_shape_area;

    switch (user_option) {
        case 1: // Area Quadrado (A = L * L)
            float square_side;

            printf("Digite o Lado do Quadrado: ");
            scanf("%f", &square_side);

            geometric_shape_area = square_side * square_side;

            printf("\nArea do Quadrado: %.2f\n\n", geometric_shape_area);
            break;
        case 2: // Area Retangulo (A = L * B)
            float rectangle_side;

            printf("Digite o Lado do Retangulo: ");
            scanf("%f", &rectangle_side);

            float rectangle_base;

            printf("Digite a Base do Retangulo: ");
            scanf("%f", &rectangle_base);

            geometric_shape_area = rectangle_side * rectangle_base;

            printf("\nArea do Retangulo: %.2f\n\n", geometric_shape_area);
            break;
        case 3: // Area Circulo (A = Pi * R^2)
            float radius_circle;

            printf("Digite o Raio do Circulo: ");
            scanf("%f", &radius_circle);

            double PI = 3.14159265359;

            geometric_shape_area = PI * pow(radius_circle, 2);     

            printf("\nArea do Circulo: %.2f\n\n", geometric_shape_area);
            break;
        case 4: // Area Trapezio ( A = (L + B) / 2 x h )
            float trapeze_side;

            printf("Digite o Lado do Trapezio: ");
            scanf("%f", &trapeze_side);

            float trapeze_base;

            printf("Digite a Base do Trapezio: ");
            scanf("%f", &trapeze_base);

            float trapeze_height;

            printf("Digite a Altura do Trapezio: ");
            scanf("%f", &trapeze_height);

            geometric_shape_area = (trapeze_side + trapeze_base) / 2 * trapeze_height;

            printf("\nArea do Trapezio: %.2f\n\n", geometric_shape_area);
            break;
        case 5: // Area Triangulo ( A = (B * h) / 2 )
            float triangle_base;

            printf("Digite a Base do Triangulo: ");
            scanf("%f", &triangle_base);

            float triangle_height;

            printf("Digite a Altura do Triangulo: ");
            scanf("%f", &triangle_height);

            geometric_shape_area = (triangle_base * triangle_height) / 2;

            printf("\nArea do Triangulo: %.2f\n\n", geometric_shape_area);
            break;

        default:
            printf("Valor Incorreto, tente novamente.\n");
            break;
    }

    return 0;
}
