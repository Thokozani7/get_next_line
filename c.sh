#!/bin/bash

echo "\033[32m------------------------------RESULTS------------------------------\033[0m"
gcc -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
gcc -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
gcc -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
./test_gnl test.txt 
echo "\033[32m---------------------------END OF RESULTS---------------------------\033[0m"