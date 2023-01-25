#include "../headers/ft_print_reverse_alphabet.h"
#include <unistd.h>

/**
 * This function makes use of ASCII Table.
 * Since 'z' has 122 as decimal value, the reverse alphabet fallows the decrease order
 *
 * @see https://www.asciitable.com/
 */
void ft_print_reverse_alphabet(void){
    for (int i = 122; i > 96; i--)
        write(1, &i, 1);
}