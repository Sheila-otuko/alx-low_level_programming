#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints diagonal on terminal
* @n: number of times \ will be displayed
* Return: void
*/
void print_diagonal(int n)

{

	int i, gap;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (gap = 0; gap < i; gap++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
