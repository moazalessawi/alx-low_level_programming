#include "main.h"

/**
 * _puts -write a functon that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
