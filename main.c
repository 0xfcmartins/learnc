#include <stdio.h>

#include "headers/ft_putchar.h"
#include "headers/ft_print_alphabet.h"
#include "headers/ft_print_numbers.h"
#include "headers/ft_print_reverse_alphabet.h"

#define BREAK_LINE "\n"
/**
 * This is a macro to create a console empty line
 */
#define WRITE_EMPTY_LINE printf("\n\n")

/**
 * Writes a string followed by a line break
 * @param string Charset
 */
void write_line(char *string){
    printf("%s%s", string,BREAK_LINE);
}

int main() {

    write_line("Module 00, Exercise 00:");
    ft_putchar('a');

    WRITE_EMPTY_LINE;

    write_line("Module 00, Exercise 01:");
    ft_print_alphabet();

    WRITE_EMPTY_LINE;

    write_line("Module 00, Exercise 02:");
    ft_print_reverse_alphabet();

    WRITE_EMPTY_LINE;

    write_line("Module 00, Exercise 03:");
    ft_print_numbers();

    WRITE_EMPTY_LINE;

    return 0;
}
