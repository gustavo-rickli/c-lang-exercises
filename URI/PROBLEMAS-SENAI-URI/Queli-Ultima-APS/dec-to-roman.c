#include<stdio.h>

#define MAX_VALUE 1000
#define MIN_VALUE 1

void convert_decimal_to_roman(int number) {
    
    char roman_number[100];
    int roman_index_position = 0;
    int remnant; // resto
    int decimal_part;
    
    if (number >= MIN_VALUE && number <= MAX_VALUE) {
        
        decimal_part = number % 10;
        remnant = number - decimal_part;
        
        // D - 500, C - 100, L - 50, X - 10
        
        while (remnant >= 500) {
            roman_number[roman_index_position] = 'D';
            roman_index_position++;
            remnant = remnant - 500;
        }
        
        while (remnant >= 100) {
            roman_number[roman_index_position] = 'C';
            roman_index_position++;
            remnant = remnant - 100;
        }
        
        while (remnant >= 50) {
            roman_number[roman_index_position] = 'L';
            roman_index_position++;
            remnant = remnant - 50;
        }
        
        while (remnant >= 10) {
            roman_number[roman_index_position] = 'X';
            roman_index_position++;
            remnant = remnant - 10;
        }
        
        printf(".");

        switch (decimal_part) {
            case 0:
                roman_number[roman_index_position++] = 'X';
                break;
            case 1:
                roman_number[roman_index_position++] = 'I';
                break;
            case 2:
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'I';
                break;
            case 3:
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'I';
                break;
            case 4:
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'V';
                break;
            case 5:
                roman_number[roman_index_position++] = 'V';
                break;
            case 6:
                roman_number[roman_index_position++] = 'V';
                roman_number[roman_index_position++] = 'I';
                break;
            case 7:
                roman_number[roman_index_position++] = 'V';
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'I';
                break;
            case 8:
                roman_number[roman_index_position++] = 'V';
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'I';
                break;
            case 9:
                roman_number[roman_index_position++] = 'I';
                roman_number[roman_index_position++] = 'X';
                break;
            default:
                break;
        }

        roman_number[roman_index_position] = '\0';

        
        printf("Dec. %d to Roman. %s\n\n", number, roman_number);
    } else {
        printf("Valor fora dos limites [1-1000]");
    }
}

int main()
{
    convert_decimal_to_roman(22);
    convert_decimal_to_roman(523);
    convert_decimal_to_roman(5);
    convert_decimal_to_roman(10);
    convert_decimal_to_roman(11);
    convert_decimal_to_roman(1000);
    convert_decimal_to_roman(500);
    convert_decimal_to_roman(501);
    convert_decimal_to_roman(100);
    convert_decimal_to_roman(111);
    convert_decimal_to_roman(184);
    convert_decimal_to_roman(396);
    convert_decimal_to_roman(999);
    
    return 0;
}
