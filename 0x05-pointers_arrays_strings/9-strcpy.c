#include <stdio.h>
#include "main.h"

/**
* *_strcpy - copies string to another string
* @dest: where string will be copied
* @src: string being copied
* Return: Always 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
