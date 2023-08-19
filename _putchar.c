#include "main.h"
#include <unistd.h>

/**
 * _putchar - to print one charcter
 * @c: the passed charcter
 * Return: passed charcter to std out for the shell
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
