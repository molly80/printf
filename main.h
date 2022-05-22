#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/* identifiers struct */
typedef struct identifiers
{
	char symbol;
	int (*func)(va_list);
} id;


/* Write functions*/
int _putchar(char c);
int _puts(char *str);


/* _printf */
int _printf(const char *format, ...);

/* Print character functions */
int _printchar(va_list args);
int _printstring(va_list args);

/* Print numbers in decimal*/
int _print_dec(va_list);

/* Print other bases*/
int _print_binary(va_list);
int _print_hexa_upper(va_list);
int _print_hexa_lower(va_list);
int _print_octal(va_list);
int _print_unsigned(va_list);

/* Function that help */
void print_number(int n);
int count_digits(int n);
char *convert(unsigned int num, int base, int lowercase);

/* Function Pointer Generator */
int (*get_func(char s))(va_list);

#endif /* MAIN_H_ */
