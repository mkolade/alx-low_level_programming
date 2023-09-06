#include "main.h"
#include <unistd.h>
/**
 * _putchar - function to return char
 * @c - char to be displayed
 * Return - On success, returns the character written. On error, returns -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
