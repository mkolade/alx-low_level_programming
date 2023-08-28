#include "main.h"
#include <stdio.h>
/**
 * _putchar - Entry Point
 * @c: value to be printed
 * Return: value success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
