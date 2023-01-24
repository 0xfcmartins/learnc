#include "../headers/ft_print_alphabet.h"
#include <unistd.h>

/**
 * This function makes use of ASCII Table.
 * Since 'a' has 97 as decimal value, the alphabet fallows the increment order
 *
 * @see https://www.asciitable.com/
 */
void ft_print_alphabet(void){
    for (int i = 97; i < 123; i++)
        write(1, &i, 1);
}