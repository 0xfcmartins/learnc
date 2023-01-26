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
    int pos = combination_size - 1; // vai dar a ultima posição do vertor digits
                                    //     \/
                                    // [1][0]
    // Quando o numero a colocar no vetor é maior que 10,
    // temos logo duas posições a colocar no vetor -> [1][0]
    if (number >= 10) {
        // Imagina 12345
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

/**
 * Valida se a combinação é valida para escrever
 *
 * @param combination
 * @param size
 * @return
 */
int validateCombination(const char combination[], int size) {
    int i = 0;
    while (i < size) {
        int b = i + 1;
        while (b < size) {
            if ((combination[i] == combination[b]) || (combination[i] > combination[b])) {
                return 0;
            }
            b++;
        }
        i++;
    }

    return 1;
}

void ft_print_combn(int n) {
    // valida se o N está entre 1 e 9
    if ((n < 1) || (n > 9))
        return; // Sai da função

    const char comma = ',';

    // Inicio da iteração
    int number = 0;

    // Calcula o
    double combinationSize = power(10, n);
    // n = 2 -> 10^2 = 99.. n=3 10^3 -> 999 (...)

    while (number < combinationSize) { //itera todos os numeros de 0 .. 99 no caso de n= 2
        char combination[n]; // vetor para criar a combinção

        numberToCombinationArray(combination, number, n);

        int i = 0;
        if (validateCombination(combination, n) == 1) {
            while (i < n) {
                write(1, &combination[i], 1);
                i++;
            }

            if (number < combinationSize - 1)
                write(1, &comma, 1);
        }

        number++;
    }
}
