#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: string
 * Return: pointer of an array of characters
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	array = (char *)malloc(sizeof(char) * (i + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i + 1; j++)
	{
		array[j] = str[j];
	}
	return (array);
}
