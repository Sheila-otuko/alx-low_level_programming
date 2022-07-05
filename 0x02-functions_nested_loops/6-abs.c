#include "main.h"
#include <stdio.h>
/**
* _abs - computes absolute value of an integer
* @c: number being tested
* Return: Always 0 (Success)
*/
int _abs(int c)
{

	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
	return (0);
}
