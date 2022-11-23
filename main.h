#define MAIN_H
#ifndef MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct call - struct call
 * @t: t - flag for data type
 * @f: function - assocated function
 *
 */
typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} call_t;

int _printf(const char *format, ...);
int buff_append(char *buff_dest, va_list arg, int buff_count, char type);
int print_buff(char *buff, unsigned int nbuff);
int parse_str(char *buff_dest, va_list arg, int buff_count);
int parse_perc(char *buff_dest, va_list arg, int buff_count);
int parse_char(char *buff_dest, va_list arg, int buff_count);

#endif
