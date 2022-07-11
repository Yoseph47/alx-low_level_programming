#include "main.h"
/**
 * _puts - prints a string, followed by a new linee.
 * @str: input  string.
 * Return: no return value.
 */
void _puts(char *str)
{
    int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
