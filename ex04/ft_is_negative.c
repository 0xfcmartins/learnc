#include "../headers/ft_is_negative.h"
#include <unistd.h>

void ft_is_negative(int n) {
    char signal;
    if (n > 0)
        signal = 'P';
    else
        signal = 'N';

    write(1, &signal, 1);
}