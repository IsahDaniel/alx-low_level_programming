#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char ls;

	for (i = 0; i <= 9; i++)
	{
		for (ls = 'a'; ls <= 'z'; ls++)
		
			_putchar(ls);
		_putchar('\n');

	}

}
