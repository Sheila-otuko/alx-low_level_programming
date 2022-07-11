#include <stdio.h>
#include "main.h"

/**
* print_array - prints elements of an array
* @a: input string
* @n: number of elements in array to be printed
* Return: void
*/
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
