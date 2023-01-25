#include <unistd.h>
#include "../headers/ft_print_numbers.h"

/**
 * This function makes use of ASCII Table.
 * Since '0' has 48 as decimal value, the rest of the numeric values fallows the increment order
 *
 * @see https://www.asciitable.com/
 */
void ft_print_numbers(void){
    for (int i = 48; i < 58; i++)
        write(1, &i, 1);
}
