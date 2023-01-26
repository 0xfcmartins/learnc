#include <unistd.h>
#include "../headers/ft_print_comb2.h"

/**
 * Fills up the combination array with the ASCII char to represent the number as a String
 *
 * @param digits            Combination storing array
 * @param number            Number
 * @param combination_size  Number of digits per combination
 */
void numberFormatToArray(char *digits, int number, int combination_size) {
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

void ft_print_comb2(void){
    const char space = ' ';
    const char comma = ',';

    int fist = 0;
    int second = 1;

    while (fist != 99){

        char firstCombi[2];

        numberFormatToArray(firstCombi, fist, 2);

        int i = 0;
        while (i < (sizeof(firstCombi) / sizeof(char))) {
            write(1, &firstCombi[i], 1);
            i++;
        }

        write(1, &space, 1);

        char secondCombi[2];
        numberFormatToArray(secondCombi, second, 2);

        i = 0;
        while (i < (sizeof(secondCombi) / sizeof(char))) {
            write(1, &secondCombi[i], 1);
            i++;
        }

        if(fist + second != 197)
            write(1, &comma, 1);

        if(second != 99){
            second++;
        }else{
            second = 0;
            fist++;
        }
    }
}
