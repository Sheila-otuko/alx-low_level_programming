#include <stdio.h>
#include "main.h"

/**
* _isupper - checks if c is uppercase or lowercase
* @c: letter being tested
* Return: 0 or 1 for uppercase or lowercase
*/
int _isupper(int c)
{
	if (c > 65 && c < 90)
		return (1);
	else
		return (0);
}
