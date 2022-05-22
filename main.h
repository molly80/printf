#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/* Flags struct */
typedef struct flags
{
	int plus;
	int space;
	int hash;
}flag_t;


/* identifiers struct */
typedef struct identifiers
{
	char symbol;
	int (*f)(va_list ap, flag_t *f);
} id;


/* Write functions*/
int _putchar(char c);
int _puts(char *str);


/* _printf */
int _printf(const char *format, ...);

/* Print character functions */
int _printchar(va_list args, flag_t *p);
int _printstring(va_list args, flag_t *p);
int _printspecifier(va_list args, flag_t *p);



/* Function Pointer Generator */
int (*get_func(char s))(va_list, flag_t *p);

int get_flags(char elem, flag_t *p);

char *convert(unsigned long int num, int base, int lowercase);

#endif /* MAIN_H_ */
