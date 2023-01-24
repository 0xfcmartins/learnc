#define BREAK_LINE "\n"

#include <stdio.h>

#include "headers/ft_putchar.h"
#include "headers/ft_print_alphabet.h"

/**
 * Writes a string followed by a line break
 * @param string Charset
 */
void write_line(char *string){
    printf("%s%s", string,BREAK_LINE);
}

/**
 * This is a macro to create a console empty line
 */
#define WRITE_EMPTY_LINE printf("\n\n")

int main() {

    write_line("Module 00, Exercise 00:");
    ft_putchar('a');

    WRITE_EMPTY_LINE;

    write_line("Module 00, Exercise 01:");
    ft_print_alphabet();

    WRITE_EMPTY_LINE;

    return 0;
}
