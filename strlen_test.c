#include "main.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "this is string\n";

	int x, y, i;

	x = _strlen(str);
	y = strlen(str);

	for (i = 0; i < x; i++)
		_putchar(str[i]);
	printf("my strlen ==> %d\n", x);

	for (i = 0; i < y; i++)
		_putchar(str[i]);
	printf("strlen ==> %d\n", y);

	return (0);
}