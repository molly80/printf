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



/* Function Pointer Generator */
int (*get_func(char s))(va_list);

#endif /* MAIN_H_ */
