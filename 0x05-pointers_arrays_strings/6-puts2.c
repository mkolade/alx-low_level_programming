#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length == 0 || length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
