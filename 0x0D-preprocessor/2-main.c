#include <stdio.h>
#ifndef PRINT_FILE_NAME
#define PRINT_FILE_NAME() printf("%s/n", __FILE__)
#endif
/**
 * main - function to print file name
 * Return: Always (0) success
 */
int main()
{
	PRINT_FILE_NAME();
	return (0);
}
