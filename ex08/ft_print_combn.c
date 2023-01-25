#include "ft_print_combn.h"

#include <unistd.h>

double power(int base,int exp){
    double result = 1.0;

    while (exp != 0) {
        result *= base;
        --exp;
    }

    return result;
}

void toString(int number, int n, char* digits) {
    int pos = n - 1;

    if(number >= 10) {
        while (number >= 10) {
            digits[pos] = (char) ((number % 10) + '0');

            number = number / 10;
            pos--;
        }
    }

    digits[pos] = (char) (number + '0');
    pos--;

    while (pos >= 0) {
        digits[pos] = '0';
        pos--;
    }
}

void ft_print_combn(int n){
    char comma = ',';

    int i = 0;
    double control = power(10,n);
    while (i <control){
        char digits[n];

        toString(i, n, digits);

        int it = 0;
        while (it < (sizeof(digits) / sizeof(char))) {
            write(1, &digits[it], 1);
            it++;
        }

        if(i < control - 1)
            write(1, &comma, 1);

        i++;
    }
}
