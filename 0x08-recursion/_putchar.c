#include <unistd.h>
#include "main.h"
/**
 * _putchar - Entry point
 * Return: Always string
 * @c: The character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
