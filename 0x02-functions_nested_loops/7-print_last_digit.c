#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number
* @c: number being tested
* Return: Always 0 (Success)
*/
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
		c = -c;
		_putchar(c + '0');
		return (c);
}
