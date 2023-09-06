#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *duplicate;

	while (str[len] != '\0')
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
