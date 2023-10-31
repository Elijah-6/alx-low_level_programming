#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void print_number(int n);

/* Helper function */
int _putchar(char c);

#endif

