#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct token - A token struct.
 *
 * @token: Format token.
 * @f: The function associated.
*/
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

/*putchar*/
int _putchar(char c);

/*Mandatory Tasks*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
