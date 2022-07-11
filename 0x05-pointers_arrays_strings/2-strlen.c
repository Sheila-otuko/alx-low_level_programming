#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: input character
* Return: string length
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}