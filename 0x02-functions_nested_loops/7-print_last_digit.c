#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints the last digit of a number
* @c: number being tested
* Return: Always 0 (Success)
*/
int print_last_digit(int c)
{
	int d = c % 10;

	_putchar(d);
	return (c % 10);
}
