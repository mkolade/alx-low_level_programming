#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prototype to print out output
 * @c: function to be printed
 * Return: number of characters written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
