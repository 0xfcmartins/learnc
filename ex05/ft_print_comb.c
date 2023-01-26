#include "../headers/ft_print_comb.h"
#include <unistd.h>

void ft_print_comb(void) {
    const char comma = ',';

    int first = 0;
    int second = 0;
    int thirt = 0;

    int comma_control = 0;
    while (first != 10) {

        if (((first != second) && (first != thirt) && (second != thirt))
            && (thirt > second && second > first)) {

            if (comma_control > 0)
                write(1, &comma, 1);

            char output = (char) (first + '0');
            write(1, &output, 1);

            output = (char) (second + '0');
            write(1, &output, 1);

            output = (char) (thirt + '0');
            write(1, &output, 1);

            comma_control = 1;
        }

        if (thirt == 9) {
            second++;
            thirt = 0;
        } else {
            thirt++;
        }

        if (second == 9) {
            first++;
            second = 0;
        }
    }
}
