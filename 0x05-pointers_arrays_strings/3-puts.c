#include "main.h"
/**
 * _puts - prints out a string in standard output
 * @str: string
 */
void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
