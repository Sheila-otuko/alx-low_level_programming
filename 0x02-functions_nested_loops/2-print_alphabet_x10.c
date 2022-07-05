#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		count++;
		_putchar('\n');
	}
}
