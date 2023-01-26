#include "../headers/ft_print_combn.h"

#include <unistd.h>

/**
 * Calculates the power base ^ exponential
 *
 * @param base          Base value
 * @param exponential   Exponential value
 * @return The resulting power
 */
double power(int base, int exponential) {
    double power = 1.0;

    while (exponential != 0) {
        power *= base;
        --exponential;
    }

    return power;
}

/**
 * Fills up the combination array with the ASCII char to represent the number as a String
 *
 * @param digits            Combination storing array
 * @param number            Number
 * @param combination_size  Number of digits per combination
 */
void numberToCombinationArray(char *digits, int number, int combination_size) {
    int pos = combination_size - 1;

    if (number >= 10) {
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

void ft_print_combn(int n) {
    const char comma = ',';

    int number = 0;
    double combinationSize = power(10, n);

    while (number < combinationSize) {
        char combination[n];

        numberToCombinationArray(combination, number, n);

        int i = 0;
        while (i < (sizeof(combination) / sizeof(char))) {
            write(1, &combination[i], 1);
            i++;
        }

        if (number < combinationSize - 1)
            write(1, &comma, 1);

        number++;
    }
}
