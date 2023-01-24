cmake_minimum_required(VERSION 3.24)
project(learnc_cpp C)

set(CMAKE_C_STANDARD 11)

add_executable(learnc_cpp main.c ex00/ft_putchar.c headers/ft_putchar.h ex01/ft_print_alphabet.c headers/ft_print_alphabet.h)
