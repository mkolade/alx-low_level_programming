#include "main.h"
#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
