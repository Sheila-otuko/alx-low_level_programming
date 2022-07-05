#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number
* @c: number being tested
* Return: Always 0 (Success)
*/
int print_last_digit(int c)
{
	int a;

	if (c < 0)
		c = -c;
		a = c % 10;
	_putchar(a + '0');
	return (a);
}
