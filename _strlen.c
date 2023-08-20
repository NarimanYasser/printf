#include "main.h"
/**
 * _strlen - to count the length of string
 * @str: passed string
 * Return: the length of string if there is error ==> -1
 */

int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (-1);

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}