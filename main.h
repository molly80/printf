#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
void vprintk( const char* fmt, va_list args);
int _printchar(va_list args);
int _printstr(va_list args);
int _print_format(const char *format, va_list args);
int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _validate_char(char type);
int _write(char c);

#endif
