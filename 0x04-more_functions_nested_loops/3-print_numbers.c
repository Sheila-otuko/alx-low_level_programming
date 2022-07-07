#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints 0-9
*
* Return: Always 0 (success)
*/
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
