cmake_minimum_required(VERSION 3.24)
project(learnc_cpp C)

set(CMAKE_C_STANDARD 11)

add_executable(learnc_cpp main.c ex00/ft_putchar.c headers/ft_putchar.h ex01/ft_print_alphabet.c headers/ft_print_alphabet.h ex03/ft_print_numbers.c headers/ft_print_numbers.h ex02/ft_print_reverse_alphabet.c headers/ft_print_reverse_alphabet.h ex08/ft_print_combn.c ex04/ft_is_negative.c headers/ft_is_negative.h ex05/ft_print_comb.c headers/ft_print_comb.h ex06/ft_print_comb2.c headers/ft_print_comb2.h)
